# Problem 4 - Dish and Ingredients

Implement class Ingredient with:

- name - dynamically allocated char array
- quantity
- calories (calories per unit)

For Ingredient, implement:

- default constructor
- constructor with arguments
- copy constructor
- destructor
- assignment operator
- method that returns total calories for the ingredient:
  quantity \* calories
- operator << in this format:
  [name] [quantity]

Then implement class Dish with:

- ingredients - dynamically allocated array of Ingredient objects
- dishName - dynamically allocated char array
- ingredientCount - number of ingredients

For Dish, implement:

- constructor with parameters
- copy constructor
- destructor
- getTotalCalories() - total calories for all ingredients
- operator + - returns a new dish with ingredients combined from both dishes
- operator += - adds new ingredients to a dish
- operator == - checks whether two dishes have the same calorie count
- operator << in this format:
  Dish: Pizza
  - Tomato: 200g/ml
  - Cheese: 50g/ml
    Total Calories: 6500

Do not change the main function.
Solutions without dynamic allocation are also accepted.
