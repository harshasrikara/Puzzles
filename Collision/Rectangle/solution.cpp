//
//  solution.cpp
//  Rectangle
//
//  Created by Harsha Srikara on 1/28/19.
//  Copyright © 2019 Harsha Srikara. All rights reserved.
//
/*
#include <iostream>
#include "Rectangle.hpp"

//function prototypes
bool isInside(Rectangle one, Rectangle two);
bool isOutside(Rectangle one, Rectangle two);
bool doesOverlap(Rectangle one, Rectangle two);

int main(int argc, const char * argv[]) {
    
    //initialize variables
    double a = 2.5;
    double b = 4;
    double c = 2.5;
    double d = 43;
    double e = 1.5;
    double f = 5;
    double g = 0.5;
    double h = 3;
    
    //create rectangles
    Rectangle rect1(a,b,d,c);
    Rectangle rect2(e,f,h,g);
    
    //print out rectangle information
    rect1.print();
    std::cout<<std::endl;
    rect2.print();
    std::cout<<std::endl;
    
    //check if inside
    if(isInside(rect1, rect2))
    {
        std::cout<<"One rectangle is within the other rectangle"<<std::endl;
    }
    else
    {
        std::cout<<"One rectangle is not within the other rectangle"<<std::endl;
    }
    //check if outside
    if(isOutside(rect1, rect2))
    {
        std::cout<<"Rectangles are seperate and outside of each other"<<std::endl;
    }
    else
    {
        std::cout<<"Rectangles are not seperate and not outside of each other"<<std::endl;
    }
    //check if they overlap
    if(doesOverlap(rect1, rect2))
    {
        std::cout<<"One rectangle intersects the other rectangle"<<std::endl;
    }
    else
    {
        std::cout<<"The rectangles do not intersect each other"<<std::endl;
    }
    
    return 0;
}

bool isInside(Rectangle one, Rectangle two)
{
    //load variables
    double oneCenterX = one.getCenterX();
    double oneCenterY = one.getCenterY();
    double oneLength = one.getLength();
    double oneWidth = one.getWidth();
    
    double twoCenterX = two.getCenterX();
    double twoCenterY = two.getCenterY();
    double twoLength = two.getLength();
    double twoWidth = two.getWidth();
    
    
    if ((oneCenterX + oneWidth) < (twoCenterX + twoWidth))
    {
        if((oneCenterX - oneWidth) > (twoCenterX - twoWidth))
        {
            if((oneCenterY + oneLength) < (twoCenterX + twoWidth))
            {
                if((oneCenterY - oneLength) > (twoCenterY - twoLength))
                {
                    return true;
                }
            }
        }
    }
    if ((oneCenterX + oneWidth) > (twoCenterX + twoWidth))
    {
        if((oneCenterX - oneWidth) < (twoCenterX - twoWidth))
        {
            if((oneCenterY + oneLength) > (twoCenterX + twoWidth))
            {
                if((oneCenterY - oneLength) < (twoCenterY - twoLength))
                {
                    return true;
                }
            }
        }
    }
    return false;
}
bool isOutside(Rectangle one, Rectangle two)
{
    //load variables
    double oneCenterX = one.getCenterX();
    double oneCenterY = one.getCenterY();
    double oneLength = one.getLength();
    double oneWidth = one.getWidth();
    
    double twoCenterX = two.getCenterX();
    double twoCenterY = two.getCenterY();
    double twoLength = two.getLength();
    double twoWidth = two.getWidth();
    
    if ((oneCenterX + oneWidth) < (twoCenterX - twoWidth))
    {
        return true;
    }
    if ((oneCenterY - oneWidth) > (twoCenterX + twoWidth))
    {
        return true;
    }
    if ((oneCenterY + oneLength) < (twoCenterY - twoLength))
    {
        return true;
    }
    if ((oneCenterY - oneLength) > (twoCenterY - twoLength))
    {
        return true;
    }
    return false;
}

//basically if the rectangles arent inside or outside they overlap
bool doesOverlap(Rectangle one, Rectangle two)
{
    if(!isInside(one, two)  &&  !isOutside(one, two))
    {
        return true;
    }
    return false;
}
*/
