#include<iostream.h>
#include<conio.h>

int length,breadth,height,area;
class room
{
    public:
    friend int calculatearea(int length,int height);

    friend int calculatevolume(int length,int breadth,int height);

    friend int calculateprice();

    friend void put(room a);
};
    int calculatevolume(int length,int breadth,int height)
    {
	int volume;
	volume=2*(length*breadth)+(breadth*height)+(length*height);
	cout<<"Volume: "<<volume<<endl;
	return volume;
    }
    int calculatearea(int length,int height)
    {

	area=length*height;
	cout<<"Area: "<<area<<endl;
	return area;
    }
    int calculateprice()
    {
	int price;
	if(area<500)
	{
	    price=area*10000;
	    cout<<"Price: "<<price<<endl;
	}
	else if((area>500) && (area<750))
	{
	    price=area*15000;
	    cout<<"Price: "<<price<<endl;
	}
	else if((900>area) && (area>750))
	{
	    price=area*17000;
	    cout<<"Price: "<<price<<endl;
	}
	else
	{
	    price=area*20000;
	    cout<<"Price: "<<price<<endl;
	}

	return price;

    }

void main()
{
    clrscr();
    int price,l,b,h;
    cout<<"Enter length:"<<endl;
    cin>>l;

    cout<<"Enter breadth:"<<endl;
    cin>>b;

    cout<<"Enter height:"<<endl;
    cin>>h;

    calculatearea(l,h);
    calculatevolume(l,b,h);
    calculateprice();

    getch();
}
