#include<iostream>
#include<cstring>
using namespace std;
class test
{
public:
	char *p;
void print(){cout<<&p<<"\n";}
test(const char *r){
p=new char[20];//Dynamic Memory 
strcpy(p,r);}
test (test &c)
{
cout<<"Copy constructor called\n";
}
~test()
{
	cout<<"Destructor called\n";
	delete[] p;
}
};

int main()
{
test camera("Hello");
test snapshot=camera;
camera.print();
snapshot.print();
return 0;
}

