# 167. Two Sum II - Input Array Is Sorted

| Field | Value |
| --- | --- |
| Platform | LeetCode |
| Problem number | 167 |
| Difficulty | Medium |
| Language | c++ |
| Link | [https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) |

## Problem

You are given a **1-indexed** array of integers `numbers` that is already **sorted in non-decreasing order**.

Find **two** numbers such that they add up to a specific `target` number. Let these two numbers be `numbers[index~1~]` and `numbers[index~2~]` where `1 &lt;= index~1~ &lt; index~2~ &lt;= numbers.length`.

Return the indices of the two numbers `index~1~` and `index~2~` as an integer array `[index~1~, index~2~]` of length 2.

The tests are generated such that there is **exactly one solution**. You **may not** use the same element twice.

Your solution must use only constant extra space.

**Example 1:**

```
**Input:** numbers = [2,7,11,15], target = 9
**Output:** [1,2]
**Explanation:** The sum of 2 and 7 is 9. Therefore, index~1~ = 1, index~2~ = 2. We return [1, 2].
```

**Example 2:**

```
**Input:** numbers = [2,3,4], target = 6
**Output:** [1,3]
**Explanation:** The sum of 2 and 4 is 6. Therefore index~1~ = 1, index~2~ = 3. We return [1, 3].
```

**Example 3:**

```
**Input:** numbers = [-1,0], target = -1
**Output:** [1,2]
**Explanation:** The sum of -1 and 0 is -1. Therefore index~1~ = 1, index~2~ = 2. We return [1, 2].
```

**Constraints:**

- `2 &lt;= numbers.length &lt;= 3 * 10^4^`
- `-1000 &lt;= numbers[i] &lt;= 1000`
- `numbers` is sorted in **non-decreasing order** .
- `-1000 &lt;= target &lt;= 1000`
- The tests are generated such that there is **exactly one solution** .
