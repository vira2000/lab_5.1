// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double g(const double a, const double b); // прототип
int main()
{
	double s, t;
    cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double z = (g(1,s)+pow(1+g(t,1)*g(t,1),2))/(1+pow(g(s+t,1),3));
	cout << "z = " << z << endl;
	return 0;
}
double g(const double a, const double b) // визначення
{
	return a*a+a*b+b*b;
}