#include<iostream>
using namespace std;
int main()
{
	double l;
	double b;
	cout << "Enter length of a rectangle: " << endl;
	cin >> l;
	cout << "Enter breadth of a rectangle: " << endl;
	cin >> b;
	double p=2*(l+b);
	cout << "The perimeter of that rectangle: " << p << endl;
	return 0;
}

