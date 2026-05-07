# Problem 3

For a private banker who trades stocks, implement a module for managing client portfolios.

Create a class StockRecord with:

- Stock ID (char array of length 12)
- Company name (char array of length 50)
- Purchase price (double)
- Current price (double)
- Number of shares (int)

Define required constructors and a setter for the current price:

- void setNewPrice(double c)

Also implement:

- double value() - computes current stock value
- double profit() - computes current stock profit

Use these formulas:

- Value = number of shares \* current price
- Profit = number of shares \* (current price - purchase price)

Overload operator << to print a stock record in this format:

- Company Shares PurchasePrice CurrentPrice Profit

Create a class Client with:

- Client full name (char array of length 60)
- Account ID (int)
- Dynamic array of StockRecord objects
- Number of records in the portfolio

Define required constructors, destructor, and:

- double totalValue() - sum of values for all stock records in the portfolio

Overload these operators:

- operator += to add a new StockRecord to the client portfolio
- operator << to print portfolio info:
  - first line: account ID and total portfolio value
  - next lines: each stock record on a separate line
