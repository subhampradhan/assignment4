void max(float a,float b)
{
	if(a>b)
	{
             cout<<"the maximum is "<<a<<endl;
	}
	else
	{
	cout<<"the maximum is "<<b<<endl;	
	}
}

int main() {
	float b,a;
	cin>>a>>b;
	cout<<"enter two numbers "<<a<<"&"<<b<<endl;
	max(a,b);
	return 0;
}
