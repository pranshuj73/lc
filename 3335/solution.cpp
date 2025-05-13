class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
      const int MOD = 1e9 + 7;
      std::vector<long long> freq(26, 0);

      for (char c : s) freq[c - 'a']++;

      while(t-- > 0) {
        std::vector<long long> nextFreq(26, 0);

        // right shift the freq arr i.e. incrment next char freq value
        for (int i = 0; i < 25; ++i) {
          nextFreq[i + 1] = freq[i] % MOD;
        }

        // incrmeent all a & b values by number of occurence of z
        nextFreq[0] = (nextFreq[0] + freq[25]) % MOD;
        nextFreq[1] = (nextFreq[1] + freq[25]) % MOD;

        freq = nextFreq;
      }

      long long totalLength = 0;
      for (long long count: freq) {
        totalLength = (totalLength + count) % MOD;
      }

      return static_cast<int>(totalLength);
    }
};
