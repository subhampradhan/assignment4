#include <iostream>
using namespace std;

void evenodd(int a)
{
	if(a%2==0)
	{
             cout<<"the number  is even "<<endl;
	}
	else
	{
	cout<<"the number is odd "<<endl;	
	}
}

int main() {
	int b;
	cin>>b;
	cout<<"enter the number "<<b<<endl;
	evenodd(b);
	return 0;
}
