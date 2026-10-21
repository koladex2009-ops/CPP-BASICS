#include <iostream>
#include <cmath>

int main() {
double a;
double b;
double c;

std::cout << "Enter side a: ";
std::cin >> a;

std::cout << "Enter side b: ";
std::cin >> b;

double a_square = pow(a, 2);
double b_square = pow(b, 2);
double c_sqaure = a_square + b_square;
double hypotenuse = sqrt(c_sqaure);

std::cout << "The hypotenuse is " << hypotenuse;

    return 0;
}