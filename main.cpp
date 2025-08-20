#include <iostream>

struct Fraction
{
    int num{};
    int deno{1};
};

void getFrac(Fraction &frac)
{
    std::cout << "Enter a value for the numerator: ";
    std::cin >> frac.num;
    std::cout << "Enter a value for the denominator: ";
    std::cin >> frac.deno;
    std::cout << "\n";
}

Fraction operator*(Fraction &frac1, Fraction &frac2)
{
    return Fraction{frac1.num * frac2.num, frac1.deno * frac2.deno};
}

void printResult(Fraction &f)
{
    std::cout << "Your fractions multiplied together: " << f.num << "/" << f.deno << "\n";
}

int main()
{
    Fraction f1{};
    Fraction f2{};
    getFrac(f1);
    getFrac(f2);

    Fraction final{f1 * f2};
    printResult(final);

    return 0;
}