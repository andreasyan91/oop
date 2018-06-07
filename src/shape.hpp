#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <string>

class Shape 
{
public:
        Shape(std::string);
        ~Shape();
        virtual float calculate_area();
        std::string get_type();
        
private:
        std::string m_type;
};

#endif
