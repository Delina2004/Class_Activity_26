#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;

   
    bool operator==(const Point& other) const;
};


ostream& operator<<(ostream& os, const Point& point);

#endif 
