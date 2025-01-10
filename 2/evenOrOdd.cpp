#include <iostream>

void getInput(int &number)
{
    while (true)
    {
        std::cout << "input here" << std::endl;
        std::cin >> number;
        if (std::cin.fail())
        {
            std::cout << "invalid input" << std::endl;
            std::cin.clear();
            std::cin.ignore(32767, '\n');
        }
        else
        {
            std::cin.ignore(32767, '\n');
            break;
        }
    }
}

void evenOrOdd(int number)
{
    if (number == 0)
    {
        std::cout << "0 is neither even nor odd." << std::endl;
    }
    else
    {
        if number
            % 2 == 0
            {
                std::cout << number << " is even." << std::endl;
            }
        else
        {
            std::cout << number << " is odd." << std::endl;
        }
    }
}

int main()
{
    int numberToCheck;
    getInput(numberToCheck);
    evenOrOdd(numberToCheck);
    return 0;
}