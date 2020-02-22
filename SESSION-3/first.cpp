#include<iostream>
using namespace std;
inline int square(int s)
{
	return s*s;
}
inline int looper(int s)
{
	int ans=1;
	for(int i=1;i<10;i++)
		{ans=ans*i;}
	return ans;
}
inline int statter(int s)
{
	static int one=1;
	s=one;
	return s;
}
int main()
{
	cout<<"The square of 3 is:"<<square(3)<<endl;
	cout<<"Presenting to you the party poopers the compiler ignores"<<endl;
	cout<<"The looper:"<<looper(3)<<endl;
	cout<<"The statter:"<<statter(4)<<endl;
}