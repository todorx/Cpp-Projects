# Problem 2

Implement a class List that stores:

- Numbers in the list (dynamically allocated array of integers)
- Number of elements in the list

Define these methods for List:

- Constructor with arguments, copy constructor, destructor, assignment operator
- print() - prints list info in this format:
  [number of elements]: x1 x2 ... xn sum: [sum] average: [average]
- sum() - returns the sum of all elements
- average() - returns the average value of all elements

Additionally, create a class ListContainer that stores:

- Array of lists (dynamically allocated array of List objects)
- Number of lists in the container
- Number of attempts to add a list (initially 0)

Define these methods for ListContainer:

- Default constructor, copy constructor, destructor, assignment operator
- print() - prints all lists in this format:
  List number: [index] List info: [List::print() output]
  sum: [sum] average: [average]
  If the container is empty, print only: The list is empty.
- addNewList(List l) - adds a list only if its sum is different from all sums already present in the container
- sum() - returns the total sum of all elements in all lists
- average() - returns the average of all elements in all lists in the container
