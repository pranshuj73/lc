// @leet start
class Solution {
    public int strStr(String haystack, String needle) {
        int hsLen = haystack.length();
        int nLen = needle.length();
        if (nLen > hsLen) {
            return -1;
        } else if (nLen == hsLen) {
            if (haystack.equals(needle)) {
                return 0;
            }
            return -1;
        }
        int possibleOccurence = -1;

        for (int i = 0; i < hsLen - nLen + 1; i++) {
            if (haystack.charAt(i) == needle.charAt(0)) {
                if (haystack.substring(i, i + nLen).equals(needle)) {
                    return i;
                }
            }
        }

        return possibleOccurence;
    }
}
// @leet end
