#include<iostream>
using namespace std;

struct student
{
	char name[23];
   int age;
   float fees;
};
main()
{
	student s1;
	cout<<"enter the student name";
	cin>>s1.name,23;
	cout<<"enter the student age";
	cin>>s1.age;
	cout<<"enter the student fees";
	cin>>s1.fees;
	cout<<"the name is ="<<s1.name<<endl;
	cout<<"the age is ="<<s1.age<<endl;
	cout<<"the fees is ="<<s1.fees<<endl;

	
	return 0;
}
