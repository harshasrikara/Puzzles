//
//  Circle.cpp
//  Rectangle
//
//  Created by Harsha Srikara on 5/31/19.
//  Copyright © 2019 Harsha Srikara. All rights reserved.
//

#include "Circle.hpp"

//constructors
Circle::Circle()
{
    centerX = 0;
    centerY = 0;
    radius =0;
}
Circle::Circle(double CX, double CY, double rad)
{
    centerX = CX;
    centerY = CY;
    radius = rad;
}

//getters
double Circle::getCenterX() const
{
    return centerX;
}
double Circle::getCenterY() const
{
    return centerY;
}
double Circle::getRadius() const
{
    return radius;
}

//setters
void Circle::setCenterX(double CX)
{
    centerX = CX;
}
void Circle::setCenterY(double CY)
{
    centerY = CY;
}
void Circle::setRadius(double rad)
{
    radius = rad;
}


//print
void Circle::print()
{
    print(std::cout);
}
void Circle::print() const
{
    print(std::cout);
}
std::ostream& Circle::print(std::ostream &out)
{
    out<<"Circle"<<std::endl;
    out<<"Center is ("<<getCenterX()<<","<<getCenterY()<<")"<<std::endl;
    out<<"Radius - "<<getRadius()<<std::endl;
    return out;
}
std::ostream& Circle::print(std::ostream &out) const
{
    out<<"Circle"<<std::endl;
    out<<"Center is ("<<getCenterX()<<","<<getCenterY()<<")"<<std::endl;
    out<<"Radius - "<<getRadius()<<std::endl;
    return out;
}
