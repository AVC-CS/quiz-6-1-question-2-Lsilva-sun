#include <iostream>
#include <fstream>

using namespace std;

int writeFile(string filename);
int readFile(string filename);

int writeFile(string filename)

{
    int num, ID;
    string name, department;
    double salary;
    
    cout << "Enter number of employess: ";
    cin >> num;

    ofstream ofs(filename);
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

    ofs << ID << " " << name << " " << department << " "<< salary << "\n"; 

    }

    ofs.close();
    return num; 
}

int readFile(string filename) {

    int ID;
    string name, department;
    double salary;
    double total, avg;
    int num = 0;

    ifstream ifs(filename);
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }

    while (ifs >> ID >> name >> department >> salary) {   // no reading num here
        cout << " Employee ID: " << ID << " Name: " << name << " Department: " << department << " Salary: " << salary << endl;
        total = total + salary;
        num++;
    }

    if (num > 0) {
        avg = total / num;
        cout << "\nTotal Salary: " << total
             << "\nAverage Salary: " << avg << endl;
    }
    return num; 
}
