/* Operator Overloading in Complex number */
#include<iostream>
using namespace std;

class complex
{
	private:
	float real;
	float imag;
	public:
       complex()                //default constructor
       {
         real=0;
         imag=0;
        }
      friend  istream &operator>>(istream&in,complex&c);
      friend  ostream &operator<<(ostream&out,complex&c);
	complex operator+(complex t);
	complex operator*(complex t);
};

istream &operator>>(istream&in,complex&c)
{
      cout<<"\nEnter real and imaginary parts of number:";
      in>>c.real>>c.imag;
}
   
ostream &operator<<(ostream&out,complex&c)
{   cout<<"\nThe complex no is:";
       out<<c.real<<"+"<<c.imag<<"i";
}

complex complex::operator+(complex t)
{
	complex temp;
	temp.real=real + t.real;
	temp.imag=imag + t.imag;
	return temp;
}
complex complex::operator*(complex t)
{
	complex temp;
	temp.real=(real*t.real)-(imag*t.imag);
	temp.imag=(real*t.imag)+(t.real*imag);
	return temp;
}

int main()
{
	complex c1,c2,c3;
	
	cout<<"\nFOR 1ST COMPLEX NO";
    	cin>>c1;
      	cout<<c1;
     
	cout<<"\nFOR 2ND COMPLEX NO";
		cin>>c2;
    	cout<<c2;
	
	int choice;

	cout<<"\nENTER THE OPERATION WHICH IS TO BE PERFORMED:\n1.ADDITION \n2.MULTIPLICATION ";
	cin>>choice;

	switch(choice)	
	{
		case 1:	cout<<"PERFORMING C1 + C2";
			c3=c1+c2;
			cout<<c3;
			break;
		case 2:	cout<<"PERFORMING C1 * C2";
			c3=c1*c2;
			cout<<c3;
			break;
		
		default: cout<<"INVALID CHOICE";
	}

}

/* OUTPUT::
FOR 1ST COMPLEX NO
Enter real and imaginary parts of number:5
6

The complex no is:5+6i
FOR 2ND COMPLEX NO
Enter real and imaginary parts of number:7
8

The complex no is:7+8i
ENTER THE OPERATION WHICH IS TO BE PERFORMED:
1.ADDITION
2.MULTIPLICATION 1
PERFORMING C1 + C2
The complex no is:12+14i

PERFORMING C1 * C2
The complex no is:-13+82i
*/