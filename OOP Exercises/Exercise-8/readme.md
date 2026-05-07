# NBAPlayer

Define a class NBAPlayer with:

- dynamically allocated player name
- team name (char array up to 40 characters)
- average points this season (double)
- average assists this season (double)
- average rebounds this season (double)

For NBAPlayer, implement:

- default constructor and constructor with arguments
- copy constructor and assignment operator
- destructor
- rating() computed as:
  45% points + 30% assists + 25% rebounds
- print() format:
  Name - Team
  Points: value
  Assists: value
  Rebounds: value
  Rating: value

## AllStarPlayer

Create derived class AllStarPlayer from NBAPlayer with additional data:

- average All-Star points (double)
- average All-Star assists (double)
- average All-Star rebounds (double)

For AllStarPlayer, implement:

- default constructor
- constructor from NBAPlayer plus All-Star stats
- constructor with all arguments
- copy constructor, assignment operator, destructor
- allStarRating() computed as:
  30% points + 40% assists + 30% rebounds

Override:

- rating() to return the average of regular rating and All-Star rating
- print() to include:
  All Star Rating: value
  New Rating: value

Input/output examples are included in the provided test cases.
