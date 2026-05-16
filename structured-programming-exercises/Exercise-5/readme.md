# Problem 5

For a natural number `a`, say that it is a **rounding** of another natural number `b` if the digits equal to `9` in `b` are replaced by `7` in `a`.

Read an unknown number of integers (no more than 100) from standard input until a value is entered that cannot be interpreted as an integer.

Print the smallest 5 roundings of all entered numbers, ordered from smallest to largest.

**Note:** If fewer than 5 numbers are entered, print as many results as there are inputs.

Computing the rounding of a given number must be implemented in a separate **recursive function** `replaceNinesWithSevens(int a)`.

**Example:**

For the numbers `9592, 69403, 100007, 6, 987, 6977, 33439`, their roundings are `7572, 67403, 100007, 6, 787, 6777, 33437`, and the smallest 5 of them printed in order are `6 787 6777 7572 33437`.

| Input                                  | Result      |
| -------------------------------------- | ----------- |
| `5<br>6<br>8<br>9<br>9<br>9<br>9<br>y` | `5 6 7 7 7` |
