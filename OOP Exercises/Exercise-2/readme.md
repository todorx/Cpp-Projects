# Problem 3 - Chocolate Factory

Implement a class Chocolate with the following data:

- name - chocolate name (char array with up to 100 characters)
- price - standard retail price for one package

For Chocolate, implement:

- default constructor
- constructor with parameters
- operator << that prints objects in this format:
  [name]: $[price]

Then implement class ChocolateFactory with:

- products - dynamically allocated array of Chocolate objects
- weeklyProduction - dynamically allocated int array, where weeklyProduction[i] is the number of packages produced weekly for products[i]
- numProducts - number of chocolate types the factory produces

For ChocolateFactory, implement:

- constructor with parameters
- destructor
- weeklyIncome() - returns total weekly production value
- operators < and > - compare factories by weekly income
- operator + - returns a new factory with combined production from two factories
- operator << with format:
  [product0] x [weeklyProduction0]
  [product1] x [weeklyProduction1]
  ...
  [productN] x [weeklyProductionN]
  $[weeklyIncome]/wk

Do not change the main function.
Solutions without dynamic allocation are also accepted.
