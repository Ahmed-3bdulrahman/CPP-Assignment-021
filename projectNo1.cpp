#include <iostream>
using namespace std;

class Rectangle {
private:
    double Width, Height;
public:
    bool isSquare(double width, double height) {
        Width = width;
        Height = height;
        if(width == height) {
            cout << "this is not rectangle it is square" << endl;
            return true;
        }
        return false;
    }
    void perimeter(double width, double height) {
        Width = width;
        Height = width;
        double result = 2 * (Width + Height);
        cout << "The perimeter is equal " << result << endl;
    }
    void area(double width, double height) {
        Width = width;
        Height = height;
        double result = width * height;
        cout << "The eara is equal " << result << endl;
    }
    Rectangle(double width, double height) {
        Width = width;
        Height = height;
    }
};

int main()
{
    Rectangle rectangle1 = Rectangle(4, 5);
    Rectangle rectangle2 = Rectangle(4, 4);

    cout << "The first rectangle:-" << endl;
    rectangle1.isSquare(4, 5);
    rectangle1.perimeter(4, 5);
    rectangle1.area(4, 5);
    cout << endl;
    cout << "The second rectangle:-" << endl;
    rectangle1.isSquare(4, 4);
    rectangle1.perimeter(4, 4);
    rectangle1.area(4, 4);
    
    return 0;
}