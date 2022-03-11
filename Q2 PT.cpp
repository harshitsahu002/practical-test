#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int RollNo;
    string Name;
    int Class;
    int Year;
    int TotalMarks;
};

int main()
{
    ofstream f2;
    f2.open("student.txt");

    for (int i = 0; i < 1; i++)
    {
        Student obj;
		cout<<"Enter student roll no.: ";
        cin >> obj.RollNo;
        f2 << obj.RollNo << "  ";

        cin.ignore();
        cout<<"Enter student name: ";
        getline(cin, obj.Name);
        f2 << obj.Name << "    ";
        
        cout<<"Enter student class: ";
        cin >> obj.Class;
		cout<<"Enter student year: ";
		cin >> obj.Year;
		cout<<"Enter student total marks: ";
		cin >> obj.TotalMarks;
        f2 << obj.Class << "  " << obj.Year << "  " << obj.TotalMarks << endl;
    }
    f2.close();
    
    ifstream f3;
    f3.open("student.txt");
    
    int r;
    string n;
    int c;
    int y;
    int t;
    
    while(!f3.eof())
    {
    	f3>>r>>n>>c>>y>>t;
    	cout<<"Student roll no.:"<<r<<endl;
    	cout<<"Student name:"<<n<<endl;
    	cout<<"Student class:"<<c<<endl;
    	cout<<"Student year:"<<y<<endl;
    	cout<<"Student total marks:"<<t<<endl<<endl;
	}
	
	f3.close();

    return 0;
}
