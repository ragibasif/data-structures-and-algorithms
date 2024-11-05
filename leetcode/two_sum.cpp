/*Two Sum*/
/**/
/*- use a hashmap*/
/*- there is always exactly one solution*/
/*- store the element as the key and its index as the value*/
/*- you are looking for `target - nums[i]` in the hash map, if its there then you've found your answer*/

vector<int> twoSum(vector<int>& nums, int target) {
    std::unordered_map<int,int> hash_map;
    std::vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        if (hash_map.find(target - nums[i]) != hash_map.end()) {
            res.push_back(i);
            res.push_back(hash_map[target - nums[i]]);
            return res;
        }
        hash_map[nums[i]] = i;
    }
    return res;
}
