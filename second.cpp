#include<iostream>
using namespace std;
class operation
{
	int a,b,add;
public:
	void get();
	void sum();
};
inline void operation::get()
{
	cout<<"Enter first value";
	cin>>a;
	cout<<"Enter second value";
	cin>>b;
}
inline void operation::sum()
{
	add=a+b;
	cout<<"Addition:"<<a+b<<endl;
}
int main()
{
	operation s;
	s.get();
	s.sum();
	return 0;
}