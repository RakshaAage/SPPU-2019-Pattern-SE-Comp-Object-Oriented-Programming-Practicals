//Multiple Inheritance and Exception Handling

#include<iostream>
#include<string.h>
using namespace std;

class publication
{
	protected:
	char name[30];
	float price;
	
	public:
	virtual void get_data()=0;
	virtual void display_data()=0;
	
};

class book:public virtual publication
{
	private:
	int page_count;
	
	public:
	void get_data();
	void display_data();
};

class tapes:public virtual publication
{
	private:
	int tape_time;
	
	public:
	void get_data();
	void display_data();
	
};

void book::get_data()
{
	cout<<"\nEnter the Title of the Book :";
	cin>>name;
	try
	{
		cout<<"\nEnter the Price of the Book :";
		cin>>price;
		if (price>1000)
		{
			throw price;
		}
	}
	catch (float) 
	{
		cout << "\n Price is too high !! Enter Afforable Price :";
		cin>>price;
	}
	cout<<"\nEnter the Page Count of the Book :";
	cin>>page_count;
}

void tapes::get_data()
{
	cout<<"\nEnter the Title of the Audio Cassette :";
	cin>>name;
	
	try
	{
		cout<<"\nEnter the Price of the Audio Cassette :";
		cin>>price;
		if (price>1000)
		{
			throw price;
		}
	}
	catch (float) 
	{
		cout << "\n Price is too high !! Enter Afforable Price :";
		cin>>price;
	}
	cout<<"\nEnter the Time of Cassette in Minutes :";
	cin>>tape_time;
}

void book::display_data()
{
	cout<<"TITLE OF BOOK: "<<name<<endl;
	cout<<"PRICE OF BOOK: "<<price<<endl;
	cout<<"PAGE COUNT: "<<page_count<<endl;
}

void tapes::display_data()
{
	cout<<"TITLE OF AUDIO CASSETTE: "<<name<<endl;
	cout<<"PRICE OF AUDIO CASSETTE: "<<price<<endl;
	cout<<"TIME OF AUDIO CASSETTE: "<<tape_time<<endl;
}


int main()
{
	publication *p[50];
	int ch,n;
	int i=0;
	
	do
	{
		cout<<"\n\tMENU"<<endl;
		cout<<"Enter 1 for Book Input\nEnter 2 for Audio Cassette Input\nEnter 3 for Display\nEnter 4 for Exit"<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1: cout<<"\n----------------------------------------------------------------------------\n";
					cout<<"\nBOOK INPUT :"<<endl;
					p[i]=new book();
					p[i]->get_data();
					i++;
					cout<<"\n----------------------------------------------------------------------------\n";
					break;
			
			case 2: cout<<"\n----------------------------------------------------------------------------\n";
					cout<<"\nAUDIO CASSETTE INPUT :"<<endl;
					p[i]=new tapes();
					p[i]->get_data();
					i++;
					cout<<"\n----------------------------------------------------------------------------\n";
					break;
					
			case 3: cout<<"\nDISPLAYING PUBLICATION RECORDS :"<<endl;
					n=i;
					for (i=0;i<n;i++)	
					{
						cout<<"\n----------------------------------------------------------------------------\n";
						p[i]->display_data();
						cout<<"\n----------------------------------------------------------------------------\n";
					}
					break;
			case 4: cout<<"\nEXITING THE PROGRAM !!"<<endl;
					break;
					
			}
	}while(ch>=1 && ch<=4);
	return 0;

}

/*
        MENU
Enter 1 for Book Input
Enter 2 for Audio Cassette Input
Enter 3 for Display
Enter 4 for Exit
1

----------------------------------------------------------------------------

BOOK INPUT :

Enter the Title of the Book :Falero

Enter the Price of the Book :200

Enter the Page Count of the Book :45

----------------------------------------------------------------------------

        MENU
Enter 1 for Book Input
Enter 2 for Audio Cassette Input
Enter 3 for Display
Enter 4 for Exit
2

----------------------------------------------------------------------------

AUDIO CASSETTE INPUT :

Enter the Title of the Audio Cassette :Music

Enter the Price of the Audio Cassette :50

Enter the Time of Cassette in Minutes :45

----------------------------------------------------------------------------

        MENU
Enter 1 for Book Input
Enter 2 for Audio Cassette Input
Enter 3 for Display
Enter 4 for Exit
3

DISPLAYING PUBLICATION RECORDS :

----------------------------------------------------------------------------
TITLE OF BOOK: Falero
PRICE OF BOOK: 200
PAGE COUNT: 45

----------------------------------------------------------------------------

----------------------------------------------------------------------------
TITLE OF AUDIO CASSETTE: Music
PRICE OF AUDIO CASSETTE: 50
TIME OF AUDIO CASSETTE: 45

----------------------------------------------------------------------------

        MENU
Enter 1 for Book Input
Enter 2 for Audio Cassette Input
Enter 3 for Display
Enter 4 for Exit
4

EXITING THE PROGRAM !!*/