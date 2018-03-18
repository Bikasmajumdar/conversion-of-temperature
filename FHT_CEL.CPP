//conversion of fahrenheit degree to celsius degree
#include<iostream.h>
#include<conio.h>
class temperature
{
	float tcel;
	float tfht;
	public:
	void getdata();
	void display();
};
void temperature::getdata(void)
{
	cout<<"enter the degree of fahrenheit:";
	cin>>tfht;
}
void temperature::display(void)
{
	tcel=5.0/9.0*(tfht-32);
	cout<<"the degree celsius:";
	cout<<tcel;
}
void main()
{
	clrscr();
	temperature t1;
	t1.getdata();
	t1.display();
	getch();
}