class test
{public:
int p;
void print(){cout<<&p<<"\n";}
test(int r){p=r;}
test (test &c)
{
cout<<"Copy constructor called\n";}
};
int main()
{
test camera(5);
test snapshot=camera;
camera.print();
snapshot.print();
return 0;
}
