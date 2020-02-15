#include<iostream>
using namespace std;
class Base
{
private:
	int a;
public:
	A(){cin>>a;}
	friend class Inherit;
};
class Inherit
{
private:
	int b;
public:
	void show(Base &x)
	{
		cout<<"Base variable a:"<<x.a;
	}
};
int main()
{
	Base a;
	Inherit b;
	b.show(a);
	return 0;
}