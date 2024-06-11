#include<iostream>
using namespace std;
void      printhi()
{
	cout<<"Hi"<<endl;
	return ;
}
int sum(int a, int b)
{
	int c;
	a=700;
	c=a+b;
	cout<<"the value of c is"<<c<<endl;
}
void swap(int &a, int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"the values of a and b after wapping are:"<<a<<" "<<b<<endl;
}
int fun(int &a, int b)
{
	a=99999;
	b=99999;
	cout<<"the values of a and b "<<a<<" "<<b<<endl;
}
int main()
{
	printhi();
	int a, b;
//int c;
	a=4;
	b=5;
	//c=75
/*int d ;
	d=sum(a,b);
	cout<<"the value of c is"<<c<<endl;*/
	swap(a,b);
	cout<<"the values of a and b after wapping are:"<<a<<" "<<b<<endl;
	return 0;
}