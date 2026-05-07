# Problem 6 - Passengers and Train

Create class Passenger with:

- name (char array up to 100 characters)
- wagon class (1 or 2)
- hasBicycle (bool)

For Passenger, overload:

- operator << to print passenger data

Create class Train with:

- destination (char array up to 100 characters)
- dynamically allocated array of Passenger objects
- number of passengers
- maximum bicycles allowed

For Train, implement:

- operator += to add a passenger
  - a passenger with bicycle can board only if bicycle capacity allows it
- operator << to print destination and passenger list
- passengersNoSeat()
  - computes how many bicycle passengers cannot board
  - priority is class 1 first, then class 2 until bicycle capacity is reached
  - print remaining passengers without bicycle space for class 1 and class 2

Sample input/output is provided in the exercise test.
