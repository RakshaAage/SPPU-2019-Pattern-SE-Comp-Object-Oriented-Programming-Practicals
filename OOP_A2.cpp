/*Student  Database using constructors, inline function, this pointer*/

#include<iostream>
#include<string.h>
using namespace std;
class student
{
public:   int rno;
          char name[30];
          char std[5];
          char div;
          char dob[15];
          char bloodgrp[4];
          unsigned long int contact;
          char address[200];
          static int count; 
         void getdata();
         friend void display(student); 
        
student()      //constructor
{
  rno=0;
  cout<<"\t Constructor";
  rno=count;
  count++;
}        

static void getcount()     //Static member functiorn
{
cout<<"\n count"<<count;
}

student(student & obj)     //copy constructor
{
rno=obj.rno;
div=obj.div;
contact=obj.contact;
strcpy(name,obj.name);
strcpy(dob,obj.dob);
strcpy(std,obj.std);
strcpy(bloodgrp,obj.bloodgrp);
count++;
}

~student()
{
cout<<"\n DEstructor";
cout<<"\n Destroying the object";
count++;
}
    
};     //End of class

int student::count=0;

void student::getdata()
{
cout<<"\n"<<"Enter roll no: ";
cin>>rno;
cout<<"Enter name: ";
cin>>name;
cout<<"Enter standard: ";
cin>>std;
cout<<"Enter division: ";
cin>>div;
cout<<"Enter date of birth[dd|mm|yyyy]: ";
cin>>dob;
cout<<"Enter contact number: ";
cin>>contact;
cout<<"Enter blood group: ";
cin>>bloodgrp;
};

void display(student obj)
{

cout<<"\n"<<obj.rno<<"\t"<<obj.name<<"\t"<<obj.std<<"\t"<<obj.div<<"\t"<<obj.dob<<"\t"<<obj.contact<<"\t"<<obj.bloodgrp<<"\t";
}

int main(){
student s1;

student s2(s1);
student s3(s1);
student s4(s1);

student *s[50];
int i,n;
cout<<"\n How many student object you want to create: ";
cin>>n;

for(i=0;i<n;i++)
{
s[i]=new student();
}

for(i=0;i<n;i++)
{
s[i]->getdata();
}

cout<<"Roll No: Name: \tStd: \tDiv:  Date of birth: \tContact No: \tBlood group: "<<"\n";
for (i=0;i<n;i++)
{
	display(*s[i]);
}

for(i=0;i<n;i++)
{
delete(s[i]);
}

return 0;
} 

/*OUTPUT:

 How many student object you want to create: 2
         Constructor     Constructor
Enter roll no: 1
Enter name: Raksha
Enter standard: SE
Enter division: B
Enter date of birth[dd|mm|yyyy]: 21\04\2003
Enter contact number: 2536452785
Enter blood group: A+

Enter roll no: 2
Enter name: Asha
Enter standard: SE
Enter division: B
Enter date of birth[dd|mm|yyyy]: 21\07\2003
Enter contact number: 2563854165
Enter blood group: O+
Roll No: Name:  Std:    Div:  Date of birth:    Contact No:     Blood group: 

1       Raksha  SE      B       21\04\2003      2536452785      A+
 DEstructor
 Destroying the object
2       Asha    SE      B       21\07\2003      2563854165      O+
 DEstructor
 Destroying the object
 DEstructor
 Destroying the object
 DEstructor
 Destroying the object
 DEstructor
 Destroying the object
 DEstructor
 Destroying the object
 DEstructor
 Destroying the object
 DEstructor
 Destroying the object
*/