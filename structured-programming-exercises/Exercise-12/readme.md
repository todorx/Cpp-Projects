For a natural number `a` we say that it is a **rounding** of another natural number `b` **iff** the digits equal to `9` in `b` are replaced by `7` in `a`.

**Example.** The number `734775` is a poramnuvanje of `934795`.

Read an unknown number of integers (no more than 100) from standard input, until a value is entered that cannot be interpreted as an integer.

Your task is to print the smallest 5 roundings of all entered numbers, ordered from smallest to largest.

**Note:** If fewer than 5 numbers are entered, print as many results as there are inputs.

Computing the poramnuvanje of a given number must be implemented in a separate **recursive function** `poramnet(int a)`.

**Example.**

For the numbers: `9592, 69403, 100007, 6, 987, 6977, 33439`,

their roundings are: `7572, 67403, 100007, 6, 787, 6777` and `33437`, respectively,

and the smallest 5 of them printed in order are: `6 787 6777 7572 33437`.

**For example:**

| Input                                | Result    |
| :----------------------------------- | :-------- |
| 5<br>6<br>8<br>9<br>9<br>9<br>9<br>y | 5 6 7 7 7 |
