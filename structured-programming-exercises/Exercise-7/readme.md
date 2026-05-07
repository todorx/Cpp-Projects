**Problem 10**

Read lines of text from standard input until a line containing `#` is read. For each input line, print the count of digits in that line, followed by a colon `:`, then the digits themselves sorted in ascending order by ASCII code. Each input line has at most 100 characters.

**Example:**

| Input                                                                               | Result           |
| ----------------------------------------------------------------------------------- | ---------------- |
| `74I9BjpbhbsfX6Ai0xtnmv4csz2gNv`                                                    | `7:0244679`      |
| `wtkb3Y82B9oygnG1vhRsMOuman2n894v08w4pI3e4x`                                        | `14:01223344...` |
| `p7A3p01U70aeGxwpOptb2rie`                                                          | `6:012377`       |
| `nw01MAok4HWisf913hjtiyscgwhdr7w921m7eddhy6ne40fHbsZc3ac`                           | `14:00112334...` |
| `Zmwk1yrnqt0LjT6ItS2kH`                                                             | `4:0126`         |
| `kfcp3Xpxx030B0ojf2G2o4JgkTso1bxqgxkifmbwrxRevKum8tvq4FZxi9LsUM2bq3jGjuo0eu4iv6...` | `16:0000222...`  |
| `W79qURXz32tn8gdzAmasf019JdFbVtizbwu1t09d1kLfpxF1dw7g4wqHSLgEojK27bYP`              | `16:0011122...`  |
| `wyqzCunXvicN1D31v41hbhvmC45m69u587aW0gAZ4mvhypshmn0kVs`                            | `15:0011134...`  |
| `#`                                                                                 |                  |
