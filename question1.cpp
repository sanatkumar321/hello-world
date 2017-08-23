#include<iostream> 
using namespace std;
int integer()
{
	int a;
	cout << "Enter an integer:";
	cin >> a;
	cout << "The integer is:" << a << endl;
	return a;
}
double decimal()
{
	double c;
	cout <<"Enter your height:" << endl;
	cin >> c;
	cout << "Your height is:" << c << endl;
	return c;
}
bool torf()
{
	cout << boolalpha;
	bool b;
	cout << "Are you a boy(1=true/0=false)?" << endl;
	cin >> b;
	cout << "the statement is" << " "<< b << endl;
	return b;
}
char yos()
{
	char r;
	cout << "Enter the initial letter of your first name:" << endl;
	cin >> r;
	cout << "the initial letter of your first name is: " << r << endl;
	return r;
}

int main()
{
	yos();
	integer();
	decimal();
	torf();
	return 0;
}

