# 617A. Elephant

| Field | Value |
| --- | --- |
| Platform | Codeforces |
| Problem number | 617A |
| Rating | rating 800 |
| Time limit | time limit per test |
| Memory limit | memory limit per test |
| Tags | math |
| Language | cpp |
| Link | [https://codeforces.com/contest/617/problem/A](https://codeforces.com/contest/617/problem/A) |

## Problem

An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0 and his friend's house is located at point *x*(*x* &gt; 0) of the coordinate line. In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.

InputThe first line of the input contains an integer *x* (1 ≤ *x* ≤ 1 000 000) — The coordinate of the friend's house.

OutputPrint the minimum number of steps that elephant needs to make to get from point 0 to point *x*.

ExamplesInput
```
5  
```

Output
```
1  
```

Input
```
12  
```

Output
```
3  
```

NoteIn the first sample the elephant needs to make one step of length 5 to reach the point *x*.

In the second sample the elephant can get to point *x* if he moves by 3, 5 and 4. There are other ways to get the optimal answer but the elephant cannot reach *x* in less than three moves.
