# Problem 6

Read the dimensions of a matrix (m, n <= 100) from standard input, followed by the matrix elements. Generate an array (with at most m elements) where each element is the element in the corresponding row that is farthest from the arithmetic mean of that row. If multiple elements are equally far, take the first one. The order of the array corresponds to the order of the rows.

## Example

**Input:**
3 6
1 2 2 3 4 5
1 1 2 2 3 3
1 2 3 4 5 6

**Output:**

## Test cases

| Input                                           | Result  |
| ----------------------------------------------- | ------- |
| 4 4<br>1 2 3 4<br>5 6 7 8<br>9 8 7 6<br>5 4 3 2 | 1 5 9 5 |
| 4 4<br>1 1 2 2<br>7 6 6 7<br>4 5 4 5<br>1 1 1 1 | 1 7 4 1 |
