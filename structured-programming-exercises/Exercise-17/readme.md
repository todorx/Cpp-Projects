# Problem 17

Read two integers from standard input: `N` and `X`.

Transform each input string so that every lowercase and uppercase letter (`a-z`, `A-Z`) is replaced by the same letter shifted forward by `X` positions in the alphabet. If the shift goes past the end of the alphabet, continue cyclically from the beginning. Non-letter characters stay unchanged.

**Note:** The transformation must be implemented with a separate recursive function.

## Example

```text
Input
7 3
Daddy's flown across the ocean
Leaving just a memory

Output
Gdggb'v Iorzq dfurvv wkh rfhdq
Ohdylqj mxvw d phprub
```
