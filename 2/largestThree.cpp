#include <iostream>

void getThreeInputs(int &a, int &b, int &c)
{
    while (true)
    {
        std::cout << "input a, b, and c here" << std::endl;
        std::cin >> a >> b >> c;
        if (std::cin.fail())
        {
            std::cout << "Invalid input, please input again." << std::endl;
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

void printLargestThree(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        std::cout << a << " is the largest." << std::endl;
    }
    else if (b >= a && b >= c)
    {
        std::cout << b << " is the largest." << std::endl;
    }
    else
    {
        std::cout << c << " is the largest." << std::endl;
    }
}

int main()
{
    int a, b, c;
    getThreeInputs(a, b, c);
    printLargestThree(a, b, c);
    return 0;
}
