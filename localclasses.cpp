#include<iostream>
using namespace std;
void f();
int main()
{
	f();
	//myclass not define here
	return 0;
}
void f()
{
	class myclass{
		int i;
	public:
		void put_i(int n){i=n;}
		int get_i() {return i;}
	}obj;

	obj.put_i(10);
	cout<<obj.get_i();
}