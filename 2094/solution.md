it seems like a simple problem where i need to create all possible 3 digit combinations from the given array

the starting digit should not be a zero

the integer must be even

then i return a sorted array of unique integers

---

in order to solve this, you just use a nested list, loop over digits, check if first digit is not 0 && check if number is even

if so, add it to array

return the array

