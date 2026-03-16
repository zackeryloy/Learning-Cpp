#include <iostream>

int main() {
    // const keyword makes the variable constant and not able to be changed
    // aka 'read only'
    const double PI = 3.14159;
    const int LIGHT_SPEED = 2.99792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;



    double radius = 10;
    double circumference = 2 * PI * radius;


    std::cout << circumference << "cm";

    return 0;
}