/*Merge Sorted Array*/
/*- the arrays are sorted by non-decreasing order so start from the back of both arrays since they are guaranteed to have the largest elements*/
/*- use three pointers*/
/*- after the comparison operation, copy `nums2` remaining elements (if any) over to `nums1`*/

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int res_last = m+n-1;
    int nums1_last = m-1;
    int nums2_last = n-1;
    while (nums1_last >= 0 && nums2_last >= 0) {
        if (nums2[nums2_last] >= nums1[nums1_last]) {
            nums1[res_last] = nums2[nums2_last];
            nums2_last--;
            res_last--;
        }
        else if (nums2[nums2_last] < nums1[nums1_last]) {
            nums1[res_last] = nums1[nums1_last];
            nums1[nums1_last] = 0;
            nums1_last--;
            res_last--;

        }
    }
    while (nums2_last >= 0) {
        nums1[res_last] = nums2[nums2_last];
        res_last--;
        nums2_last--;
    }
}
