#include <iostream>
using namespace std;

void cube(float a)
{
	cout<<"the cube is "<<(a*a*a)<<endl;
}
int main() {
	float b;
	cin>>b;
	cube(b);
	return 0;
}
