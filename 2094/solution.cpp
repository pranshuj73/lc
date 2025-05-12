class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int len = digits.size();
        vector<int> arr;
        for (int i = 0; i < len; ++i) {
            if (digits[i] != 0) {
                for (int j = 0; j < len; ++j) {
                    for (int k = 0; k < len; ++k) {
                        if (i != j && j != k && i != k) {
                            int number =
                                digits[i] * 100 + digits[j] * 10 + digits[k];
                            if (number % 2 == 0) {
                                arr.push_back(number);
                            }
                        }
                    }
                }
            }
        }
        // sort the array
        std::sort(arr.begin(), arr.end());
        // remove duplicates
        auto last = std::unique(arr.begin(), arr.end());
        // trim array to remove spaces left due to the duplicates
        arr.erase(last, arr.end());
        
        return arr;
    }
};
