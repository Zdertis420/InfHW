#include <iostream>


void task1()
{
    std::cout << "My name is Zdertis" << std::endl;
}


void task2()
{
    int a, b;

    std::cin >> a >> b;

    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    if (b != 0)
    {
        std::cout << a / b << std::endl;
    }
    else
    {
        std::cout << "You can't divide by zero!\n";
    }
}


void task3()
{
    int a, b;

    std::cin >> a >> b;

    if (b != 0)
    {
        std::cout << -a / b << std::endl;
    }
    else
    {
        std::cout << "You can't divide by zero!\n";
    }
}

void task4()
{
    int a, b, c;

    std::cin >> a >> b >> c;

    if (a == 0 && b != 0)
    {
        std::cout << -b / c << std::endl;
    }
    else if (a != 0 && b == 0)
    {
        if (c < 0)
        {
            std::cout << "Equation has no real roots" << std::endl;
        }
        else
        {
            std::cout << std::sqrt(c / a);
        }
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        std::cout << "Equation has no sense" << std::endl;
    }
    else if (a != 0 && b != 0 && c != 0)
    {
        int d = b * b - 4 * a * c;

        if (d < 0)
        {
            std::cout << "Equation has no real roots" << std::endl;
        }
        else if (d == 0)
        {
            std::cout << -b / 2 * a;
        }
        else
        {
            std::cout << (-b + std::sqrt(d)) / 2 * a << (-b - std::sqrt(d) / 2 * a) << std::endl;
        }
    }
    else
    {
        std::cout << "Equation has no sense" << std::endl;
    }
}


void task5()
{
    bool sun, lamp, curtains;

    std::cin >> sun >> lamp >> curtains;

    if (lamp || (sun && !curtains))
    {
        std::cout << "Bright\n";
    }
    else
    {
        std::cout << "Dark\n";
    }
}


int main()
{
    std::cout << "Hello World!\n";

    return 0;
}