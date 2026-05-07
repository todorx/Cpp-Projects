# Problem 1

Implement two classes using **object-oriented programming** and **inheritance**:

- `Product`: Base class with a protected `price` attribute and methods for calculating final price and printing
- `DiscountedProduct`: Derived class that inherits from `Product` and applies a discount to the final price

The classes should support:

- Default constructors
- Parameterized constructors
- Copy constructors
- Virtual methods for `finalPrice()` and `print()`

Write a program to test both classes and demonstrate the use of inheritance and polymorphism.

**Example:**

| Input                                  | Output               |
| -------------------------------------- | -------------------- |
| Create Product(100)                    | Price: 100           |
| Create DiscountedProduct(Product, 10%) | Discounted Price: 90 |
