#include<iostream>
using namespace std;
class c1
{
	static int resource;
public:
	int get_resource();
	void free_resource()
	{
		resource =0;
	}
};
int c1::resource;//define resource
int c1::get_resource()
{
	if(resource) return 0; //resource already in use
	else 
	{
		resource=1;
		return 1;//resource allocated to this object
	}
}
int main()
{
	c1 obj1,obj2;
	if(obj1.get_resource()) cout<<" ob1 has resources\n";
	if(!obj2.get_resource()) cout<<"ob2 has denied resource\n";
	obj1.free_resource();//let someone else use it
	if(obj2.get_resource()) cout<<"obj2 can now use resource";
	return 0;
}