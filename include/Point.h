//
// Created by student on 12.10.18.
//

#ifndef LES3_POINT_H
#define LES3_POINT_H

#include <ostream>

class Point{
private:
    int x, y;
public:
    int getX() const;

    int getY() const;

    void setX(int x);

    void setY(int y);

    Point(int x1,int x2);
    friend Point operator-(Point &a,Point &b);

    friend std::ostream &operator<<(std::ostream &os, const Point &point);
};



#endif //LES3_POINT_H
