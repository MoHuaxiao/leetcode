class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		for (vector<int>::iterator it = nums.begin() + 1; it != nums.end();) {
			if (*it == *(it + 1)) it = nums.erase(it);
			else it++;
		}
		return nums.size();
	}
};