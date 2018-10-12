//
// Created by student on 12.10.18.
//

#include <../include/Point.h>
#include <iostream>
#include <Point.h>

int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

void Point::setX(int x) {
    Point::x = x;
}

void Point::setY(int y) {
    Point::y = y;
}

Point::Point(int x1,int x2){
    x=x1;
    y=x2;
}

Point operator-(Point &a, Point &b) {

    return Point(a.x-b.x, a.y-b.y);
}

std::ostream &operator<<(std::ostream &os, const Point &point) {
    os << "x: " << point.x << " y: " << point.y;
    return os;
}
