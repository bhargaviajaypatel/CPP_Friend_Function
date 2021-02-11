#include<iostream.h>
#include<conio.h>
class history;

class science
{
       private:
		char sname[20];
		float sprice;
       public:
       void getSname()
       {
		cout<<"Enter name of the book: "<<endl;
		cin>>sname;
       }

	   void getSprice()
       {
		cout<<"Enter price of the book: "<<endl;
		cin>>sprice;
       }

       friend void disp(science x,history y);
};

class history
{
	private:
		float hprice;
		char hname[20];
       public:
       void getHname()
       {
		cout<<"Enter name of the book: "<<endl;
		cin>>hname;
       }

       void getHprice()
       {
		cout<<"Enter price of the book: "<<endl;
		cin>>hprice;
       }
       friend void disp(science x,history y);
};

void disp(science x,history y)
{
	float dis_sci_price,dis_hist_price,discount=20;

	dis_sci_price = x.sprice-((x.sprice*discount)/100);
	cout<<"\nName\tPrice\tDiscounted Price\n";
	cout<<x.sname<<"  "<<x.sprice<<"  "<<"  "<<dis_sci_price;

	dis_hist_price=y.hprice-((y.hprice*discount)/100);
	cout<<"\n"<<y.hname<<"  "<<y.hprice<<"  "<<"  "<<dis_hist_price;

}


void main()
{
	clrscr();
	science sb1;
	history hb1;

	sb1.getSname();
	sb1.getSprice();

	hb1.getHname();
	hb1.getHprice();

	disp(sb1,hb1);

	getch();

}