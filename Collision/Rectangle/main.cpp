//
//  main.cpp
//  Rectangle
//
//  Created by Harsha Srikara on 1/28/19.
//  Copyright © 2019 Harsha Srikara. All rights reserved.
//

#include <iostream>
#include "Rectangle.hpp"

//function prototypes
bool isInside(double oneCX,double oneCY, double oneH, double oneW, double twoCX, double twoCY, double twoH, double twoW);
bool isOutside(double oneCX,double oneCY, double oneH, double oneW, double twoCX, double twoCY, double twoH, double twoW);
bool doesOverlap(double oneCX,double oneCY, double oneH, double oneW, double twoCX, double twoCY, double twoH, double twoW);

bool isInside(Rectangle one, Rectangle two);
bool isOutside(Rectangle one, Rectangle two);
bool doesOverlap(Rectangle one, Rectangle two);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    double a = 2.5;
    double b = 4;
    double c = 2.5;
    double d = 43;
    double e = 1.5;
    double f = 5;
    double g = 0.5;
    double h = 3;
    
    Rectangle rect1(a,b,d,c);
    Rectangle rect2(e,f,h,g);
    
    rect1.print();
    rect2.print();
    
    std::cout<<isInside(a, b, c, d, e, f, g, h)<<std::endl;
    std::cout<<isOutside(a, b, c, d, e, f, g, h)<<std::endl;
    std::cout<<doesOverlap(a, b, c, d, e, f, g, h)<<std::endl;
    
    return 0;
}

bool isInside(double oneCX,double oneCY, double oneH, double oneW, double twoCX, double twoCY, double twoH, double twoW)
{
    if((oneCX+oneW<twoCX+twoW) && (oneCX-oneW>twoCX-twoW))
    {
        if((oneCY+oneH<twoCY+twoH) && (oneCY-oneH>twoCY-twoH))
        {
            return true;
        }
    }
    if((oneCX+oneW>twoCX+twoW) && (oneCX -oneW<twoCX-twoW))
    {
        if((oneCY+oneH>twoCY+twoH) && (oneCY-oneH<twoCY-twoH))
        {
            return true;
        }
    }
    return false;
}
bool isOutside(double oneCX,double oneCY, double oneH, double oneW, double twoCX, double twoCY, double twoH, double twoW)
{
    if((oneCX+oneW<twoCX-twoW) || (oneCY -oneW>twoCX+twoW))
    {
        return true;
    }
    if((oneCY+oneH<twoCY-twoH) || (oneCY-oneH>twoCY+twoH))
    {
        return true;
    }
    return false;
}
bool doesOverlap(double oneCX,double oneCY, double oneH, double oneW, double twoCX, double twoCY, double twoH, double twoW)
{
    if(!isInside(oneCX, oneCY, oneH, oneW, twoCX, twoCY, twoH, twoW) && !isOutside(oneCX, oneCY, oneH, oneW, twoCX, twoCY, twoH, twoW))
    {
        return true;
    }
    return false;
}

bool isInside(Rectangle one, Rectangle two);
bool isOutside(Rectangle one, Rectangle two);
bool doesOverlap(Rectangle one, Rectangle two);
