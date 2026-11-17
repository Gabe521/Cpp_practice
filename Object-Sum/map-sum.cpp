#include <iostream>
#include <map>
#include <string>

int main() 
{
    std::map<std::string, int> salaries{{"John", 100}, {"Ann", 160}, {"Pete", 130}};
    int sum = 0;
    for (const auto& [key, value] : salaries)
    {
        sum += value;
    }
    std::cout << sum << "\n";
    return sum;
};