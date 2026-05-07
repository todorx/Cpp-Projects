Read an unknown number of lines from standard input until a line containing `0` is read.
Find the longest line that contains at least **2 digits**.
Then print to standard output the characters from that longest line that are located between the **first and the last digit** (inclusive) in the same order. If there are multiple such lines, print the **last** one.
Assume no line is longer than **100 characters**.

**Example:**

| Input                                                                                           | Output                                |
| ----------------------------------------------------------------------------------------------- | ------------------------------------- |
| `aaa123aa222aa2aaa23aaaaa22` `aaaaaaaaaaaa` `23aaaa` `123 aaa aaa aaa aaa 12345 aaa aaa 2a` `0` | `123 aaa aaa aaa aaa 12345 aaa aaa 2` |
