# Problem 9

Read two characters `z1` and `z2` from standard input, then read lines of text until a line containing `#` is read. Each line is at most 80 characters.

For each input line, print the substring formed by the characters located between `z1` and `z2` excluding both endpoints. Print each substring on a new line.

Assume each line contains `z1` and `z2` exactly once, `z1` always appears before `z2`, and there is at least one character between them.

**Example:**

| Input                                              | Result                               |
| -------------------------------------------------- | ------------------------------------ |
| `0 9`                                              | `nvjkfdmnlks`                        |
| `nfjskdz0nvjkfdmnlks9bvfkjmcdz,`                   | `fvkdzddjmje k dmkldz kdfds!%mlacsd` |
| `bfhjdskvfdk10fvkdzddjmje k dmkldz kdfds!%mlacsd9` | `fbnrjkdn`                           |
| `0fbnrjkdn9`                                       | `jdfkfmjndksfjd;sj sad;jm`           |
| `fjkd0jdfkfmjndksfjd;sj sad;jm 9nfcjka`            |                                      |
| `#`                                                |                                      |
