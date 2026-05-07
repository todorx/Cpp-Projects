# Problem 7 - Rent-a-Car

Implement class Automobile with:

- brand (dynamically allocated char array)
- registration (dynamically allocated array of 5 integers)
- maximum speed (int)

Provide necessary getters and setters, and overload:

- operator == to compare automobiles by registration
- operator << to print:
  Brand:[name] Registration:[x y z k l]

Implement class RentACar with:

- agency name (char array up to 100 chars)
- dynamic array of Automobile objects
- number of automobiles

Implement:

- constructor with one argument for agency name
- operator += to add a new automobile
- operator -= to remove an automobile with matching registration
- dynamic array growth by 1 element when adding
- printAboveSpeed(int max) to print cars with maximum speed greater than max

In main, read cars, add them with +=, then remove the incorrectly duplicated car from the last input line, and print agency name plus cars with speed > 150.

Example input/output cases are included in the original task text.
