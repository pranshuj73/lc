// @leet start
import java.util.*;

class Solution {
    public void rev(int[] arr) {
        for (int i = 0; i < arr.length / 2; i++)  {
            int temp = arr[i];
            arr[i] = arr[arr.length - i - 1];
            arr[arr.length - i - 1] = temp;
        }
    }

    public int hIndex(int[] citations) {
        Arrays.sort(citations);
        rev(citations);

        int numPapers = citations.length;
        if (numPapers == 1) {
            if (citations[0] > 0) {
                return 1;
            }
            return 0;
        }

        for (int i = 0; i < numPapers; i++) {
            if (citations[i] <= i + 1) {
                if (citations[i] <= i) {
                    return i;
                }
                return citations[i];
            }
        }

        return numPapers;
    }
}
// @leet end
