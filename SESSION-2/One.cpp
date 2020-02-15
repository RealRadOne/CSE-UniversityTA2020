#include <iostream>
using namespace std;
class base
{
public:
	int pubdat;
	void pub_print()
	{
		cout<<"A public print:"<<pubdat<<"\n";
		pro_print();
		pri_print();
	}
protected:
	int prodat;
	void pro_print()
	{
		cout<<"A protected print:"<<prodat<<"\n";
	}
private:
	int pridat;
	void pri_print()
	{
		cout<<"A private print:"<<pridat<<"\n";
	}
};
class derone:public base
{
public:
	void access()
	{
		cout<<"Public derivations"<<endl;
		pub_print();
		pro_print();
		//pri_print();
	}
};
class dertwo:protected base
{
public:
	void access()
	{
		cout<<"Protected derivations"<<endl;
		pub_print();
		pro_print();
		//pri_print();
	}
};
class derthree:private base
{
public:
	void access()
	{
		cout<<"Private derivations"<<endl;
		pub_print();
		pro_print();
		//pri_print();
	}
};
int main()
{
	base b;
	cout<<b.pubdat<<endl;
	b.pub_print();
	//cout<<b.prodat<<endl;
	//b.pro_print();
	//cout<<b.pridat<<endl;
	//b.pri_print();
	derone d;
	d.access();
	dertwo t;
	t.access();
	derthree th;
	th.access();
}