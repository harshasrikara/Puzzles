//
//  Shape.cpp
//  Rectangle
//
//  Created by Harsha Srikara on 5/24/19.
//  Copyright © 2019 Harsha Srikara. All rights reserved.
//

#include "Shape.hpp"

//constructors
Shape::Shape()
{
    
}
Shape::Shape(double CX, double CY)
{
    centerX = CX;
    centerY = CY;
}

//setters
void Shape::setCenterX(double CX)
{
    centerX = CX;
}
void Shape::setCenterY(double CY)
{
    centerY = CY;
}

//getters
double Shape::getCenterX() const
{
    return centerX;
}
double Shape::getCenterY() const
{
    return centerY;
}
