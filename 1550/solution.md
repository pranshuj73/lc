```1550. Three Consecutive Odds Attempted

Easy

Given an integer array arr , retum true if there are three consecutive odd numbers in the array. Otherwise,
return false.

Example 1:

Input: arr = [2,6,4,1]
Output: false
Explanation: There are no three consecutive odds.

Example 2:
Input: arr = [1,2,34,3,4,5,7,23,12]

Output: true
Explanation: [5,7,23] are three consecutive odds.

Constraints:

1 <= arr.length <= 1000

1 <= arr[i] < 1000
```

this can be solved with a sliding window

window would have a length of 3

if in the window all three integers are odd, return true

else return false


