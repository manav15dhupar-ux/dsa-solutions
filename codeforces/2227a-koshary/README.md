# 2227A. Koshary

| Field | Value |
| --- | --- |
| Platform | Codeforces |
| Problem number | 2227A |
| Rating | rating 800 |
| Time limit | time limit per test |
| Memory limit | memory limit per test |
| Tags | implementation, math |
| Language | cpp |
| Link | [https://codeforces.com/contest/2227/problem/A](https://codeforces.com/contest/2227/problem/A) |

## Problem

Yousef is at the coordinates $(0, 0)$ and wants to reach a plate of Koshary at $(x, y)$.

To get there, Yousef takes long steps. From any point $(a, b)$, a long step moves him to:

- $(a + 2, b)$ or $(a, b + 2)$

However, Yousef is allowed to take at most one short step during his entire journey. A short step moves him to:

- $(a + 1, b)$ or $(a, b + 1)$

Can Yousef reach the exact coordinates $(x, y)$ of the Koshary plate?

InputThe first line contains an integer $t$ ($1 \le t \le 100$) — the number of test cases.

Each test case contains two integers $x$ and $y$ ($1 \le x, y \le 10$) — the coordinates of the Koshary plate.

OutputFor each test case, output "YES" if Yousef can reach the Koshary plate and "NO" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

ExampleInput
```
61 11 24 65 97 210 10
```

Output
```
NOYESYESNOYESYES
```

NoteIn the first test case, it is impossible to reach $(1, 1)$ using the mentioned steps.

In the second test case, an optimal sequence of steps would be: $$(0, 0) \xrightarrow{\texttt{long}} (0, 2) \xrightarrow{\texttt{short}} (1, 2)$$

In the third test case, an optimal sequence of steps would be: $$(0, 0) \xrightarrow{\texttt{long}} (0, 2) \xrightarrow{\texttt{long}} (2, 2) \xrightarrow{\texttt{long}} (2, 4) \xrightarrow{\texttt{long}} (4, 4) \xrightarrow{\texttt{long}} (4, 6)$$
