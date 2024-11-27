//Write a C++ program to find maximum between three numbers using
//conditional operator.
#include<iostream>
using namespace std;
int main()
{
int x, y, z;
cout << "enter the 3 numers\n";
cin >> x >> y >> z;

if (x > y && x > z) {
	cout << "x is maximum";
}
else if (y > x && y > z) {
	cout << "y is maximum";
}
else if (z > x && z > y) {
	cout << "z is maximum";
}

else if (x == y && x > z) {
	cout << "x,y are maximum";
}
if (x == z && x > y) {
	cout << "x,z are maximum";
}
else if (y == z && y > x) {
	cout << "y,z are maximum";
}

return 0;
}