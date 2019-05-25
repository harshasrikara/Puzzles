//
//  Rectangle.cpp
//  Rectangle
//
//  Created by Harsha Srikara on 3/20/19.
//  Copyright © 2019 Harsha Srikara. All rights reserved.
//

#include "Rectangle.hpp"

//constructors
Rectangle::Rectangle()
{
    centerX = 0;
    centerY = 0;
    width = 0;
    length = 0;
}
Rectangle::Rectangle(double CX, double CY, double wid, double len)
{
    centerX = CX;
    centerY = CY;
    width = wid;
    length = len;
}
/*
//setters
void Rectangle::setCenterX(double CX)
{
    centerX = CX;
}
void Rectangle::setCenterY(double CY)
{
    centerY = CY;
}*/
void Rectangle::setWidth(double wid)
{
    width = wid;
}
void Rectangle::setLength(double len)
{
    length = len;
}
/*
//getters
double Rectangle::getCenterX() const
{
    return centerX;
}
double Rectangle::getCenterY() const
{
    return centerY;
}*/
double Rectangle::getWidth() const
{
    return width;
}
double Rectangle::getLength() const
{
    return length;
}

//print
void Rectangle::print()
{
    print(std::cout);
}
void Rectangle::print() const
{
    print(std::cout);
}
std::ostream& Rectangle::print(std::ostream &out)
{
    out<<"Rectangle"<<std::endl;
    out<<"Center is ("<<getCenterX()<<","<<getCenterY()<<")"<<std::endl;
    out<<"Width - "<<getWidth()<<" Length - "<<getLength()<<std::endl;
    return out;
}
std::ostream& Rectangle::print(std::ostream &out) const
{
    out<<"Rectangle"<<std::endl;
    out<<"Center is ("<<getCenterX()<<","<<getCenterY()<<")"<<std::endl;
    out<<"Width - "<<getWidth()<<" Length - "<<getLength()<<std::endl;
    return out;
}
