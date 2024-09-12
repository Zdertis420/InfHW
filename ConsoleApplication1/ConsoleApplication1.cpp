#include <iostream>
#include <cmath>


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


void task6()
{
    const double PI = 3.14; // defining pi

    int r_upper, r_lower, h; // declaring input variables

    std::cin >> r_upper >> r_lower >> h; // itintializing input variables

    if (r_upper == 0 || r_lower == 0 || h == 0) // check given numbers
    {
        std::cout << "no" << std::endl; // invalid input
    }
    else
    {
        double volume, square; // declaring variables for result
        
        volume = (PI * h * (r_upper * r_upper + r_upper * r_lower + r_lower * r_lower))/3;
        square = PI * (r_lower * r_lower + (r_upper + r_lower) * _CMATH_::sqrt((r_lower - r_upper) * (r_lower - r_upper) + h * h) + r_lower * r_lower);
        // calculating results
        std::cout << volume << std::endl << square << std::endl; // output
    }
}


void task7()
{
    double a, x; // declaring input variables
    double res1 = 0, res2 = 0; // declaring result variables

    std::cin >> a >> x; // initializing input variables

    if (std::abs(x) < 1) // checking condition for upper part
    {
        res1 = a * _CMATH_::log(x); // calculating result for upper part
    }
    if (std::abs(x) >= 1) // checking condition for bottom part
    {
        if (a - x * x >= 0) // vheking validness of bottom part w
        {
            res2 = std::sqrt(a - x * x); // calculating result for bottom part
        }
    }

    if (res1 || res2)
    {
        std::cout << res1 << std::endl << res2 << std::endl;
    }
    else
    {
        std::cout << "No solutios" << std::endl;
    } // output
}


void task8()
{
    int x, y, b;// declaring input variables

    std::cin >> x >> y >> b;// initializing input variables

    if (b - x > 0) // checking condition
    {
        std::cout << _CMATH_::log(b - y) * std::sqrt(b - x) << std::endl;// output calculated result
    }
    else
    {
        std::cout << "C++ doesn't support complex numbers!" << std::endl;//output if input is invalid
    }
}


void task9()
{
    int n;// declaring input variables
    std::cin >> n;// initializing input variables
    for (int i = n+1; i < n + 11; ++i) // declaring vor loop
    {
        std::cout << i << std::endl; // output
    }
}


void task10()
{
    for (double x = -4; x <= 4; x = x + 0.5) // declaring for loop
    {
        if (x != 1) // checking for invalid number
        {
            std::cout << "x = " << x << "; f(x) = " << (x * x - 2 * x + 2) / (x - 1) << std::endl; // output calculated result
        }
        else
        {
            std::cout << "undefuned" << std::endl; // output if invalid number
        }
    }
}


int main()
{
    task7();
    
    return 0;
}