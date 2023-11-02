#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    Triangle triangle;
    triangle.setKatet1Length(4);
    triangle.setKatet2Length(2);
    cout << triangle.hypotenuseLength() << endl;
    cout << triangle.triangle_S() << endl;

    Rectangle rectangle;
    rectangle.setHeight(6);
    rectangle.setWidth(4);
    cout << endl << rectangle.showRectangle_P();
    cout << endl << rectangle.showRectangle_S();

    return 0;
}
