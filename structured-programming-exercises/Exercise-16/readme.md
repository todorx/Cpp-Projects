# Problem 16

For a square matrix `A` of size `n x n`, read `n` and the matrix elements. Let `X` be the sum of the elements below the main diagonal. Let `Y` be the sum of the elements below the secondary diagonal. Create a new matrix `B` as follows:

- All elements on the main diagonal become `X`.
- All elements on the secondary diagonal become `Y`.
- If an element belongs to both diagonals, its value becomes `X + Y`.
- All other elements become `0`.

Print matrix `B`.

## Example

```text
Matrix A
5 5.5 6 1.2 2.5
8 95.1 21.3 13 0.2
34 4.1 37.4 22 6
4.1 5.5 0.7 7 0
42 1.1 3.2 7.5 1.8

Matrix B
110.2 0 0 0 49.5
0 110.2 0 49.5 0
0 0 159.7 0 0
0 49.5 0 110.2 0
49.5 0 0 0 110.2
```
