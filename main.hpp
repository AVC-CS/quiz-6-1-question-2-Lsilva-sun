#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    int num;
    int ID;
    string name; 
    string department; 
    double salary; 

    cout << "Enter number of employess: ";
    cin >> num;

    ofstream ofs;
    ofs.open("employee.txt");
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }
    for (int i = 0; i < num; i++) {
    cout << "Enter Employee ID: " <<endl;
    cin >> ID;
    cout << "Enter Employee Name: " << endl; 
    cin >> name;
    cout << "Enter Dempartment: " << endl;
    cin >> department;
    cout << "Enter Salary: " << endl; 
    cin >> salary;

    ofs << i + 1 << num << " " << ID << " " << name << " " << department << " "<< salary << "/n"; 

    }

    ofs.close();
}