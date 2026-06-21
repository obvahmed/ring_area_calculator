#include <iostream>

// function declaration
double circleArea(double radius);

// declaring pi as a global variable
const double pi = 3.14159;

int main(){

    // declaring variables
    double rad1 = 0, rad2 = 0, ringArea = 0;

    // asking user for input
    std::cout<<"Please enter the radius for outter circle: ";
    std::cin>>rad1;

    std::cout<<"Please enter the radius for the inner circle: ";
    std::cin>>rad2;


    // running calculations
    ringArea = circleArea(rad1) - circleArea(rad2);

    // displaying results
    std::cout<<"The area of the ring is: "<<ringArea;

    return 0;
}

// function definition
double circleArea(double radius){

    return (pi * radius * radius);
}