#include "shape.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include <iostream>

int main()
{
        Shape obj1("shape");
        obj1.calculate_area();
        std::cout << obj1.get_type() << std::endl;
        
        Rectangle rectangle(3.0, 4.0);
        std::cout << rectangle.calculate_area() << std::endl;
        std::cout << rectangle.get_type() << std::endl;

        Circle circle(9.9);
        std::cout << circle.calculate_area() << std::endl;
        std::cout << circle.get_type() << std::endl;
        return 0;
}
