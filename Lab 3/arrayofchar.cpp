#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	char* name[3]={"Vishal","D","Ranjile"};
	for (int i=0;i<3;i++)
	{
		int x;
		 x=strlen(name[i]);
		for(int j=0;j<=x;j++)
		{
			cout<<*(*(name+i)+j);
			
//			j++;
		}
		cout<<&x;
//		i++;
	}
	
}
