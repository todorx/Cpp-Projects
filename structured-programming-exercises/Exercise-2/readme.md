# Problem 2

Read a matrix of integers (N x M) from standard input. Count the number of times **3 consecutive 1s** appear in the matrix:

- Check all rows for consecutive 1s
- Check all columns for consecutive 1s
- Count each occurrence of exactly 3 consecutive 1s (when the first occurrence is found, reset and continue)

Print the total count of such sequences.

**Example:**

| Input                          | Output |
| ------------------------------ | ------ |
| 2 5<br>1 1 1 0 1<br>1 1 0 1 1  | 2      |
| 3 3<br>1 1 1<br>1 0 1<br>1 1 1 | 4      |
