//unary operator overloading usingfriend function
#include<iostream.h>
#include<conio.h>

class demo
{
private:
	int a,b,c;
public:
	void get();
	demo friend operator-(demo & f);
	void show();
};
void demo::get()
{
cout <<"enter the value of a=";
cin>>a;
cout<<"enter the value of b=";
cin>>b;
cout<<"enter the value of c=";
cin>>c;
}
demo operator-(demo & f)
{
f.a=-f.a;
f.b=-f.b;
f.c=-f.c;
}
void demo::show()
{
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
cout<<"c="<<c<<endl;
}
void main()
{
demo d;
d.get();
d.show();
-d;
d.show();
getch();
}
















