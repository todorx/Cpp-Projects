# Problem 15

Read the dimensions of a matrix and its elements from standard input. Replace the middle element of each row with the absolute difference between the sum of the first half of the row and the sum of the second half of the row. If the matrix has an even number of columns, replace the two middle elements. The middle element(s) are included in both sums when the number of columns is odd.

Print the transformed matrix.

## Example

```text
Input
m = 4
n = 4
1 3 -5 4
2 10 2 10
7 2 3 5
3 2 10 3

Output
1 5 5 4
2 0 0 10
7 1 1 5
3 8 8 3
```
