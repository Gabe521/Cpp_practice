#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<int> nums = {};
	
	for (int i = 0; i <= 1'000'000; i++)
	{
		nums.push_back(i);
	}

	int target = 745891;

	int low = 0;
	int mid = 0;
	int hi = nums.size() - 1;
	int runs = 0;
	while (low <= hi)
	{
		mid = (low + hi) / 2;
		runs++;
		
		if (nums[mid] == target)
		{
			std::cout << "Target found with " << runs << " runs." << "\n";
			break;
		}
		else if (nums[mid] > target)
		{
			hi = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}

	return 0;
}