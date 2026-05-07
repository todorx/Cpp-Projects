Write a program that reads an integer matrix A with N rows and 2 * N columns (N is not greater than 50). The program should transform the input matrix into a new matrix B by moving all elements to the right of the N-th column under the N-th row; i.e., from an N x (2*N) matrix produce a (2\*N) x N matrix.

Example for N = 3 Input:
3
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18

Output:
1 2 3
7 8 9
13 14 15
4 5 6
10 11 12
16 17 18

For example:
| Input | Result |
| :--- | :--- |
| 8<br>62 46 55 83 86 67 19 67 21 90 8 19 37 39 45 54<br>2 67 75 82 4 85 28 36 37 48 85 76 59 20 99 100<br>21 68 90 22 6 62 69 54 49 52 31 69 40 35 87 3<br>41 26 3 10 19 93 47 19 16 22 32 8 8 63 94 49<br>20 67 79 73 13 11 64 75 98 47 7 19 14 67 11 84<br>5 40 13 42 61 19 61 11 92 93 45 54 74 54 34 94<br>54 70 86 29 60 27 12 25 41 63 45 32 67 7 38 51<br>61 94 98 61 6 11 100 90 82 11 27 99 65 35 1 57 | 62 46 55 83 86 67 19 67<br>2 67 75 82 4 85 28 36<br>21 68 90 22 6 62 69 54<br>41 26 3 10 19 93 47 19<br>20 67 79 73 13 11 64 75<br>5 40 13 42 61 19 61 11<br>54 70 86 29 60 27 12 25<br>61 94 98 61 6 11 100 90<br>21 90 8 19 37 39 45 54<br>37 48 85 76 59 20 99 100<br>49 52 31 69 40 35 87 3<br>16 22 32 8 8 63 94 49<br>98 47 7 19 14 67 11 84<br>92 93 45 54 74 54 34 94<br>41 63 45 32 67 7 38 51<br>82 11 27 99 65 35 1 57 |
