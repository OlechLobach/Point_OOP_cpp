#include "point.h"

Point::Point() : x(0), y(0), z(0) {}

Point::Point(double x_val, double y_val, double z_val) : x(x_val), y(y_val), z(z_val) {}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::getZ() const {
    return z;
}

void Point::inputPoint() {
    cout << "Enter x coordinate: ";
    cin >> x;

    cout << "Enter y coordinate: ";
    cin >> y;

    cout << "Enter z coordinate: ";
    cin >> z;
}

void Point::displayPoint() const {
    cout << "Point coordinates: (" << x << ", " << y << ", " << z << ")\n";
}

void Point::saveToFile(const string& filename) const {
    ofstream file(filename);
    if (file.is_open()) {
        file << x << " " << y << " " << z << endl;
        file.close();
    }
    else {
        cerr << "Unable to open the file: " << filename << endl;
    }
}

void Point::loadFromFile(const string& filename) {
    ifstream file(filename);
    if (file.is_open()) {
        file >> x >> y >> z;
        file.close();
    }
    else {
        cerr << "Unable to open the file: " << filename << endl;
    }
}