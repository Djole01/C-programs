/*
class Solution {
	public:
		// Using Sorting
		// TC: O(nlogn)
		int sortingSolution(vector<int>& nums) {
		// sort the numbers and find the number which has duplicate
		// by checking the one which has the same at next position
		sort(nums.begin(), nums.end());

		int duplicate = 0;
		for(int i = 0; i < nums.size() - 1; i++)
			if(nums[i] == nums[i+1]) {
				duplicate = nums[i];
				break;
			}
		return duplicate;
		}
};

// Using set_difference
// returning duplicates
		void sortingSolution(void) {

		vector<int> nums { 10, 20, 30, 20, 10 };

		sort(nums.begin(), nums.end());

		set<int> uvec(nums.begin(), nums.end());

		list<int> output;

		set_difference(nums.begin(), nums.end(),
			          	  uvec.begin(), uvec.end(),
			              back_inserter(output));
		// return output;

		for (auto v : output)
		        std::cout << v << "\n";
		}

*/

// takes two vectors and makes 1 with unique values.

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{
    std::set<std::string> s;
	std::merge(names1.begin(), names1.end(),
				names2.begin(), names2.end(),
				std::inserter(s, s.begin()));
    
    std::vector<std::string> v(s.begin(), s.end());
    return v;
}

#ifndef RunTests
int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    
    std::vector<std::string> result = unique_names(names1, names2);
    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
#endif
