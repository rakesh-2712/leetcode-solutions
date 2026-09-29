# Baseball Game

**Difficulty:** Easy

**LeetCode:** https://leetcode.com/problems/baseball-game/

## Approach

Use a stack to store the valid scores. For a number, push the score onto the stack. For `+`, add the previous two scores. For `D`, double the previous score. For `C`, remove the previous score. Finally, calculate the sum of all remaining scores.

## Time Complexity

O(n)

## Space Complexity

O(n)

## Test Cases

### Test Case 1 — Typical Case

Input:
operations = ["5","2","C","D","+"]

Output:
30

### Test Case 2 — Edge Case

Input:
operations = ["1"]

Output:
1

## Notes / Edge Cases

- `C` removes the most recent valid score.
- `D` doubles the most recent valid score.
- `+` uses the previous two valid scores.
- The stack contains only valid scores.
