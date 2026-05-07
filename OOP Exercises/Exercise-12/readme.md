# Problem 4

Create a class Passenger that stores data for train passengers:

- Name (char array with maximum 100 characters)
- Wagon class (int: 1 or 2)
- Has bicycle (bool)

For this class, overload:

- operator << to print passenger information in the format:
  - passenger name
  - class number (1 or 2)
  - whether the passenger has a bicycle

Then create a class Train that stores:

- Final destination (char array with maximum 100 characters)
- Dynamically allocated array of Passenger objects
- Number of passengers in the array
- Maximum number of bicycles allowed

For Train, implement:

- operator += to add a new passenger
  - a passenger with a bicycle can board only if bicycle capacity allows it
- operator << to print the destination and list of passengers
- function passengersNoSeat()
  - calculates passengers with bicycles who cannot board due to bicycle capacity
  - first prioritize class 1 passengers with bicycles
  - then allow class 2 passengers with bicycles until capacity is reached
  - print how many class 1 passengers were left out, then how many class 2 passengers were left out

## Example Output Lines

- Number of class 1 passengers left without place: 0
- Number of class 2 passengers left without place: 0
