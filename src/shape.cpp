#include "shape.hpp"
#include <iostream>
#include <string>

Shape::Shape(std::string s)
        :m_type(s)
{
}

Shape::~Shape()
{
        std::cout << "Shape object is being deleted" << std::endl;
}

float Shape::calculate_area()
{
        std::cout << "Call calculate_area function from shape class " << std::endl;
        return 0;
}

std::string Shape::get_type()
{
        return m_type;
}

