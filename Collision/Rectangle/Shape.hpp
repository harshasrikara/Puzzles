//
//  Shape.hpp
//  Rectangle
//
//  Created by Harsha Srikara on 5/24/19.
//  Copyright © 2019 Harsha Srikara. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

class Shape{
    
private:
    double centerX;
    double centerY;
    
public:
    Shape();
    Shape(double CX, double CY);
    
    void setCenterX(double CX);
    void setCenterY(double CY);
    
    double getCenterX() const;
    double getCenterY() const;
};

#endif /* Shape_hpp */
