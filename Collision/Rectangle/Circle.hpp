//
//  Circle.hpp
//  Rectangle
//
//  Created by Harsha Srikara on 5/31/19.
//  Copyright © 2019 Harsha Srikara. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <iostream>

class Circle {
    
private:
    double centerX;
    double centerY;
    double radius;
    
public:
    //constructors
    Circle();
    Circle(double CX, double CY, double rad);
    
    //setters
    void setCenterX(double CX);
    void setCenterY(double CY);
    void setRadius(double rad);
    
    //getters
    double getCenterX() const;
    double getCenterY() const;
    double getRadius() const;
    
    //print
    void print();
    void print() const;
    std::ostream& print(std::ostream &out);
    std::ostream& print(std::ostream &out) const;
};

#endif /* Circle_hpp */
