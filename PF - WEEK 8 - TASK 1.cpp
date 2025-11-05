#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    
    cout << "numbers divisible by 3 between 1 and 50:" << endl;

    while(i <=50)
    {
        if(i %3 ==0)
        {
	
            cout << i << " ";
        }
			i++;
			
}
    return 0;
}