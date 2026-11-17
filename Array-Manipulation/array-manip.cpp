#include <iostream>
#include <algorithm>
#include <array>
#include <string>

void sort(std::array<int, 3>& arr);

int main()
{
    int sum = 0;
    double average = 0.0f;
    int largest = 0;
    int smallest = 0;
    std::array<int, 3> numbers = {10, 5, 25};

    for (size_t i = 0; i < numbers.size(); i++)
    {
        sum += numbers[i];
    }
    average = sum / numbers.size();
    sort(numbers);
    smallest = numbers.front();
    largest = numbers.back();
    std::cout << "The sum of the array is " << sum << std::endl;
    std::cout << "The average of the array is " << average << std::endl;
    std::cout << "The smallest number in the arrary is " << smallest << std::endl;
    std::cout << "The largest number in the array is " << largest << std::endl;

    return 0;
};

void sort(std::array<int, 3>& arr)
{
    std::sort(arr.begin(), arr.end());
};