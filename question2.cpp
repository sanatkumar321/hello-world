#include<iostream>
using namespace std;
int sum()
{
	int a;
	int b;
	cout << "Enter 1st integer:" << endl;
	cin >> a;
	cout << "Enter 2nd integer:" << endl;
	cin >> b;
	cout << "Sum of " << a << " & " << b << " = " << a+b << endl;
}
	
int main()
{
	sum();
	return 0;
}

