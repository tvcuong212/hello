CREATE DATABASE AZBank;
GO

USE AZBank;
GO
CREATE TABLE Customer (
    CustomerID INT PRIMARY KEY,
    Name VARCHAR(50),
    City VARCHAR(50),
    Country VARCHAR(50),
    Phone VARCHAR(15),
    Email VARCHAR(50)
);
GO

CREATE TABLE CustomerAccount (
    AccountNumber CHAR(9) PRIMARY KEY,
    CustomerID INT,
    Balance MONEY NOT NULL,
    MinAccount MONEY
    FOREIGN KEY (CustomerID) REFERENCES Customer(CustomerID)
);
GO

CREATE TABLE CustomerTransaction (
    TransactionID INT PRIMARY KEY,
    AccountNumber CHAR(9),
    TransactionDate SMALLDATETIME,
    Amount MONEY,
    DepositorWithdraw BIT,
    FOREIGN KEY (AccountNumber) REFERENCES CustomerAccount(AccountNumber),
    CHECK (Amount > 0 AND Amount <= 1000000)
);
GO


INSERT INTO Customer (CustomerId, Name, City, Country, Phone, Email)
VALUES
    (1, 'Cuong', 'Hanoi', 'Vietnam', '0123456789', 'cuong@example.com'),
    (2, 'Dung', 'Ho Chi Minh City', 'Vietnam', '0987654321', 'dung@example.com'),
    (3, 'Huy', 'Da Nang', 'Vietnam', '0955512345', 'huy@example.com'),
    (4, 'Trinh', 'Can Tho', 'Vietnam', '0911112222', 'trinh@example.com'),
    (5, 'Lam', 'Hue', 'Vietnam', '0999988880', 'lam@example.com');

INSERT INTO CustomerAccount (CustomerId, AccountNumber, Balance, MinAccount)
VALUES
    (1, 12345, 1000.50, 500.00),
    (2, 54321, 750.25, 300.00),
    (3, 98765, 1200.75, 600.00),
    (4, 56789, 500.00, 200.00),
    (5, 54322, 800.50, 400.00);


INSERT INTO CustomerTransaction (TransactionId, AccountNumber, TransactionDate, Amount, DepositorWithdraw)
VALUES
    (1, 12345, '2023-09-15 09:00:00', 100.50, 1),  -- Nạp tiền (DepositorWithdraw = 1)
    (2, 54321, '2023-09-15 10:30:00', 50.75, 1),   -- Nạp tiền (DepositorWithdraw = 1)
    (3, 98765, '2023-09-15 12:15:00', 75.25, 1),   -- Nạp tiền (DepositorWithdraw = 1)
    (4, 56789, '2023-09-15 14:45:00', 30.00, 0),   -- Rút tiền (DepositorWithdraw = 0)
    (5, 54321, '2023-09-15 16:30:00', 25.50, 0);   -- Rút tiền (DepositorWithdraw = 0)


SELECT * FROM Customer WHERE City LIKE 'Hanoi';

SELECT
    Customer.Name,
    Customer.Phone,
    Customer.Email,
    CustomerAccount.AccountNumber,
    CustomerAccount.Balance
FROM
    CustomerAccount 
JOIN
    Customer ON CustomerAccount.CustomerId = Customer.CustomerId;

CREATE VIEW vCustomerTransactions AS
SELECT
    Customer.Name,
    CustomerAccount.AccountNumber,
    CustomerTransaction.TransactionDate,
    CustomerTransaction.Amount,
    CustomerTransaction.DepositorWithdraw
FROM
    Customer 
JOIN
    CustomerAccount ON Customer.CustomerId = CustomerAccount.CustomerId
JOIN
    CustomerTransaction  ON CustomerAccount.AccountNumber = CustomerTransaction.AccountNumber;