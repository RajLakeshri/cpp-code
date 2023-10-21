#include<iostream>
using namespace std;
class Student
{
	char name [10];
	int marks; 
	int roll;
	public:
	Student()
	{
		
	}
	void get_student()
	{       cout<<"enter roll no of student "<<endl;
			cin>>roll;
			cout<<"enter name of student "<<endl;
			cin>>name;
		
			{
				cout<<"enter marks of student for sub "<<endl;
			    cin>> marks;
			}
	}
	void put_student()
	{
		cout<<"roll no is "<<roll<<" name is "<<name<<" marks are "<<marks<<endl;
	}
	int getrollno()
		{
			return roll;
		}
	
};
int main()
{ int n;
 cout<<"enter no of students "<<endl;
   cin>>n;
	Student s[n],temp;
	
	
	for(int i=0;i<n;i++)
	{
		s[i].get_student();
	}
	cout<<"before sorting "<<endl;
	for(int j=0;j<n;j++)
	{
		s[j].put_student();
	}
	for (int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i].getrollno()>s[j].getrollno())
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	cout<<"after sorting "<<endl;
	for(int j=0;j<n;j++)
	{
		s[j].put_student();
	}
	
	
	
}
