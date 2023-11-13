// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int left = 1;
        int right = n;

        while (left < right) {
            // Avoid overflow when calculating mid
            int mid = left + (right - left) / 2;

            if (isBadVersion(mid)) {
                // If mid is bad, the first bad version is in the left half
                right = mid;
            } else {
                // If mid is not bad, the first bad version is in the right half
                left = mid + 1;
            }
        }

        // At this point, left and right converge to the first bad version
        return left;
    }
};