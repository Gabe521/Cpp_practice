#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<int> nums = {};
	
	for (int i = 0; i <= 100; i++)
	{
		nums.push_back(i);
	}

    // Sum = n * (n + 1) / 2
	int length = nums.size() - 1;
	int sum = length * (length + 1) / 2;
	std::cout << sum;

	return 0;
}