/*Remove Element*/
/**/
/*- make sure the while condition is `<=`*/
/*- O(N)*/
/*- no need to actually remove anything just swap with the last element in the array by using two pointers*/

int removeElement(vector<int>& nums, int val) {
    if (nums.size() < 1) {
        return 0;
    }
    int rP = nums.size() - 1;
    int lP = 0;
    int counter = 0;
    while (lP <= rP) {
        if (nums[rP] == val) {
            rP--;
            counter++;
        }
        else if (nums[lP] != val) {
            lP++;
        }
        else {
            swap(nums[lP], nums[rP]);
        }
    }
    return nums.size() - counter;
}
