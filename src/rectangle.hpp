#include "shape.hpp"
#include <iostream>
#include <string>

class Rectangle : public Shape
{
public:
        Rectangle(float, float);
        ~Rectangle();

        float calculate_area();
        //std::string get_type();

private:
        float length;
        float width;
};
