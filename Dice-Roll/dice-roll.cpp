#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main()
{
    srand((unsigned int)time(NULL));

    int roll = 0;
    int total = 0;
    int sides = 6;
    int dice_roll_count = 2;

    for (int i = 1; i <= dice_roll_count; i++)
    {
        roll = rand() % sides + 1;
        total += roll;
        std::cout << roll << "\n";
    }
    std::cout << "Total: " << total << "\n";

}