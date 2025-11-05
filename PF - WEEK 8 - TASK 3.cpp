#include<iostream>
using namespace std;
int main()
{
	int n;
	long factorial = 1;
	
	cout << "enter a positive integer:";
	cin>>n;
	
	if (n < 0)
	{
		cout << "factorial is not defined for negative numbers." << endl;
	}
	else
	{
		for (int i =1; i <=n; i++)
		{
			factorial *=i;
		}
		cout << "factorial of " << n << " = " << factorial << endl;
	}
	
	return 0;
}
	

