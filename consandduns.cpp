#include<iostream>
using namespace std;
class myclass
{
public:
	int who;
	myclass(int id);
	~myclass();
}glob_obj1(1),glob_obj2(2);

myclass::myclass(int id)
{
	cout<<"Initializing "<<id<<"\n";
	who=id;
}
myclass::~myclass()
{
	cout<<"Destructing "<<who<<"\n";
}
int main()
{
	myclass local_obj1(3);
	cout<<"This will not be first line displayed \n";
	myclass local_obj2(4);
	return 0;
}