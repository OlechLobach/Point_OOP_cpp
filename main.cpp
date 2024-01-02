#include "point.h"

int main() {
    Point point;

  
    cout << "Enter coordinates for the point:\n";
    point.inputPoint();

    
    cout << "\nPoint Details:\n";
    point.displayPoint();

   
    string filename = "point_data.txt";
    point.saveToFile(filename);
    cout << "Point data saved to file: " << filename << endl;

   
    Point loadedPoint;
    loadedPoint.loadFromFile(filename);
    cout << "\nLoaded Point Details:\n";
    loadedPoint.displayPoint();

    return 0;
}