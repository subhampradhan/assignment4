#include <iostream>
using namespace std;

void circle(float a)
{
	cout<<"the diameter is "<<(2*a)<<endl;
	cout<<"circumference is "<<(2*3.14*a)<<endl;
	cout<<"area is "<<(a*3.14*a)<<endl;
}

int main() {
	float b;
	cin>>b;
	cout<<"the radius of circle is "<<b<<endl;
	circle(b);
	return 0;
}
