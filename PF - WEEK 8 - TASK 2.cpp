#include<iostream>
using namespace std;
int main()
{
	int choice;
	
	do
	{
		cout << "\n== Menu ==" << endl;
		cout << "1. option one" << endl;
		cout << "2. option two" << endl;
		cout << "3. option three" << endl;
		cout << "4. exit" << endl;
		cout << "enter your choice:";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				cout << "you select option one" << endl;
				break;
				
			case 2:
				cout << "you select option two" << endl;
				break;
				
			case 3:
				cout << "you select option three" << endl;
				break;
				
			case 4:
				cout << "exiting program" << endl;
				break;
				
			dafault:
				cout << "invaild choice" << endl;
		}
		} while(choice != 4);
		
		return 0;
	}
		
		
		
	
