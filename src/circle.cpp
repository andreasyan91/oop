#include "shape.hpp"
#include "circle.hpp"
#include <iostream>
#include <string>

Circle::Circle(float r)
        :Shape("Circle"), radius(r)
{
        std::cout << "Constructor is being called from CIRCLE" << std::endl;
}

Circle::~Circle()
{
        std::cout << "Destructor called from CIRCLE" << std::endl;
}

float Circle::calculate_area()
{
        float pi = 3.14;
        return (pi*radius)/2;
}
