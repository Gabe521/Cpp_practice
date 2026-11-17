#include <iostream>
#include <string>

int main()
{
    int stop = 17;
    for (int i = 1; i <= stop; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "Fizz Buzz" << "\n";
        }
        else if (i % 3 == 0)
        {
            std::cout << "Fizz" << "\n";
        }
        else if (i % 5 == 0)
        {
            std::cout << "Buzz" << "\n";
        }
        else
        {
            std::cout << i << "\n";
        }
    }
}