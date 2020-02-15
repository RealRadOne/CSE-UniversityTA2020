#include<iostream>
using namespace std;
class Base
{
private:
	int num;
public:
	friend void input(Base obj);
	void base_input(Base obj);
};
void input(Base obj)
{
cin>>obj.num;
cout<<"Friend function called"<<endl;
cout<<obj.num;
}
void Base::base_input(Base obj)
{
cin>>obj.num;
cout<<"Normal function called"<<endl;
cout<<obj.num;
}
int main()
{
	Base ob1;
	input(ob1);
	Base ob2;
	ob2.base_input(ob2);
	return 0;
}