//File Handling

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outf ("student.txt");	
				//opening file using constructor in write mode
	char name[30];
	int roll_no;
	char address[50];
	cout<<"\nEnter roll no: ";
	cin>>roll_no;
	outf<<roll_no<<endl;			//writing in file
	cout<<"\nEnter name: ";
	cin.ignore();
	cin.getline(name,30);
	outf<<name<<endl;
	cout<<"\nEnter address: ";
	cin.getline(address,50);
	outf<<address<<endl;
	outf.close();			//closing a file
	ifstream inf;
	inf.open("student.txt");	
					//opening file using function in read mode
	inf>>roll_no;
	inf>>name;
	inf>>address;			//reading from file
	cout<<roll_no<<"\n"<<name<<"\n"<<address<<endl;  
						//display on console unit 
	inf.close();			
	return 0;
}
/* OUTPUT::
Enter roll no: 1

Enter name: Asha

Enter address: Panchavati
1
Asha
Panchavati
*/