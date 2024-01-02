#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Point {
private:
    double x;
    double y;
    double z;

public:
    Point();
    Point(double x_val, double y_val, double z_val);

    double getX() const;
    double getY() const;
    double getZ() const;

    void inputPoint();
    void displayPoint() const;
    void saveToFile(const string& filename) const;
    void loadFromFile(const string& filename);
};

#endif