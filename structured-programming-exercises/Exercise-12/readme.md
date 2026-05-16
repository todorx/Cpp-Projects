# Problem 12

Read an integer `X`, the matrix dimensions `M` and `N`, and then the `M x N` matrix elements from standard input. Transform the rows of the matrix as follows:

- If the sum of the elements in a row is greater than `X`, set all elements of that row to `1`.
- If the sum of the elements in a row is less than `X`, set all elements of that row to `-1`.
- If the sum of the elements in a row is equal to `X`, set all elements of that row to `0`.

Print the transformed matrix.

**Example:**

```text
Input
31
5 4
4 2 7 11
3 8 16 1
17 8 9 5
6 14 4 7
5 15 5 6

Output
-1 -1 -1 -1
-1 -1 -1 -1
1 1 1 1
0 0 0 0
0 0 0 0
```

**Additional example:**

```text
Input
17
4 6
1 5 7 2 1 1
10 0 0 5 1 1
5 8 3 9 1 0
9 8 2 5 3 4

Output
0 0 0 0 0 0
0 0 0 0 0 0
1 1 1 1 1 1
1 1 1 1 1 1
```
