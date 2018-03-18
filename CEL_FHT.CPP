//conversion of celsius degree to fahrenheit degree
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
void temperature::getdata()
{
	cout<<"enter the value of celsius:";
	cin>>tcel;
}
void temperature::display()
{
	tfht=9.0/5.0*(tcel+32);
	cout<<"display the value of fahrenheit:";
	cout<<tfht;
}
void main()
{
	clrscr();
	temperature t;
	t.getdata();
	t.display();
	getch();
}


