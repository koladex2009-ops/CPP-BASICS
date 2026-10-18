#include <iostream>

int main() {
    /*type conversion = conversion of a value from one data type to another.
    Implicit = automatic
    Explicit = precede value with new data type (int) */

    double y = (int) 3.14;

    char x = 100;

    // std::cout << (char) 100;

    int correct = 8;
    int questions = 10;

    double result = correct/(double)questions * 100;
    std::cout << result << "%";

    return 0;
}