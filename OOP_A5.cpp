// Write a function template for selection sort that inputs, sorts and outputs an integer array and a float array. 
#include<iostream>
using namespace std;
template <class T>
class sort
{
	public:
	T a[100],temp;
	int n;
	void read();
	void display();
	void selectionsort();
	
};

template <class T>
void sort<T> :: read()
{	
	cout<<"How many elements do you want to enter?\n";
	cin>>n;	
	cout<<"Enter elements of array\n";
	for(int i=0;i<n;i++)	
	{
		cin>>a[i];
	}
	cout<<"\n";
}

template <class T>
void sort<T> :: display()
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}t

template <class T>
void sort<T> :: selectionsort()
{
	int i,j,indexmin;
	for(i=0;i<n;i++)
	{
		indexmin=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[indexmin])
			   indexmin=j;

		}
		if(indexmin!=i)
		{
			temp=a[i];
			a[i] =a[indexmin];
			a[indexmin] = temp;

		}
	}
}
int main()
{
	
	int p,i;
     	sort <int> a1;
     	sort <float> b1;
     	sort <char> c1;
     	sort <string> c2[30];
      
    	cout<<"\n INTEGER ARRAY:"<<endl;
       		a1.read();
        cout<<"Array is:"<<endl;
       		a1.display();
       		a1.selectionsort();
        cout<<"\nSorted array is:"<<endl;    
       		a1.display();
      
    
      	cout<<"\n FLOAT ARRAY:"<<endl; 
      	 	b1.read();
        cout<<"Array is:"<<endl;
       	b1.display();
      	 	b1.selectionsort();
        cout<<"\nSorted array is:"<<endl;    
       	b1.display();
     

     	cout<<"\n CHARACTER ARRAY :"<<endl;
       		c1.read();
        cout<<"Array is:"<<endl;
       		c1.display();
       		c1.selectionsort();
      	cout<<"\nSorted array is:"<<endl;    
       		c1.display();
        

     	cout<<"\n CHARACTER STRING :"<<endl;
      	cout<<"Enter the length of string"<<endl;
      		cin>>p;
              	c2[i].read();
              	c2[i].display();
      	cout<<"\nSorted string is:"<<endl;    
          for(i=0;i<p;i++)
           {  
             c2[i].selectionsort();
             c2[i].display();
           }
           
           return 0;
  }//end of main


	

