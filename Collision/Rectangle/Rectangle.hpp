//
//  Rectangle.hpp
//  Rectangle
//
//  Created by Harsha Srikara on 3/20/19.
//  Copyright © 2019 Harsha Srikara. All rights reserved.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <iostream>

class Rectangle
{
private:
    //variables
    double centerX;
    double centerY;
    double width;
    double length;
    
public:
    //constructors
    Rectangle();
    Rectangle(double CX, double CY, double wid, double len);
    
    //setters
    void setCenterX(double CX);
    void setCenterY(double CY);
    void setWidth(double wid);
    void setLength(double len);
    
    //getters
    double getCenterX() const;
    double getCenterY() const;
    double getWidth() const;
    double getLength() const;
    
    //print
    void print();
    void print() const;
    std::ostream& print(std::ostream &out);
    std::ostream& print(std::ostream &out) const;
};

#endif /* Rectangle_hpp */
