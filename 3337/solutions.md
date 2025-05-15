im thinking about how i can update the solution for 3335 to fit the problem here.

the frequency map would have to be updated the same way except now i have to refer nums[i] and update accordingly

the following is the solution i tried, building upon my freq map solution from 3335:

```cpp
class Solution {
public:
    int lengthAfterTransformations(string s, int t, vector<int>& nums) {
      const int MOD = 1e9 + 7;
      std::vector<long long> freq(26, 0);

      for (char c : s) freq[c - 'a']++;
      for (auto x : freq) {
        std::cout << x << ' ';
      }
      std::cout << '\n';


      while(t-- > 0) {
        std::vector<long long> nextFreq(26, 0);

        // right shift the freq arr i.e. incrment next char freq value
        for (int i = 0; i < 26; ++i) {
          for (int j = 1; j <= nums[i]; ++j) {
            nextFreq[(i  + j) % 26] += freq[i] % MOD;
          }
        }

        freq = nextFreq;
        for (auto x : freq) {
          std::cout << x << ' ';
        }
        std::cout << '\n';
      }

      long long totalLength = 0;
      for (long long count: freq) {
        totalLength = (totalLength + count) % MOD;
      }

      return static_cast<int>(totalLength);
    }
};
```

this however does not solve it in time for certain cases, the most efficient way to handle this problem is to use a matrix exponentiation approach

which i'll have to learn what it is (*sigh*)
