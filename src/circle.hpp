#include "shape.hpp"
#include <iostream>
#include <string>

class Circle : public Shape
{
public:
        Circle(float);
        ~Circle();
        float calculate_area();

private:
        float radius;
};
