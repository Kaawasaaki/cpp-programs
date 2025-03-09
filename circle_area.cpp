#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  float pi = 3.141;
  float diameter;

cout << "Enter diameter of circle: " << endl;
cin >> diameter;

float radius = diameter / 2;

cout << "Radius of circle is:\n " << radius;

float area = pi * radius * radius;

cout << "\nArea of circle is:\n " << area;

return 0;
}
