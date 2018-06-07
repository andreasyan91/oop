#include "shape.hpp"
#include "rectangle.hpp"
#include <iostream>
#include <string>

Rectangle::Rectangle(float l, float w)
        :Shape("Rectangle"), length(l), width(w)
{
}

Rectangle::~Rectangle()
{
        std::cout << "Rectangle object is being deleted" << std::endl;
}

float Rectangle::calculate_area()
{
        return width * length;               
}

/*std::string Rectangle::get_type()
{
        return m_type;
}
*/
