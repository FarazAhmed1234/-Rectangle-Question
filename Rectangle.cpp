#include <iostream>
using namespace std;

class Rectangle {
    protected:
        double w, h;
    
    public:
        void read_input() {
            cout << "Enter the Width: ";
            cin >> w;
            cout << "Enter the Height: ";
            cin >> h;
        }
        
        void display() {
            cout << "Width: " << w << ", Height: " << h << endl;
        }
};

class RectangleArea : public Rectangle {
    public:
        void display_area() {
            double area = w * h;
            cout << "Area: " << area << endl;
        }
};

int main() {
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.display();
    
    /*
     * Print the area
     */
    r_area.display_area();
    
    return 0;
}
