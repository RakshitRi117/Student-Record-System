#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    int roll_number , no_of_students; 
    float marks;
    cout << "Enter how many student data you want to input" << endl;
    cin >> no_of_students;
    ofstream out ("sample.txt" , ios::app);
    for (int i=0;i<no_of_students;i++) {
    cout << "Enter name" << endl;
    cin >> name;
    cout << "Enter Roll No" << endl;
    cin  >> roll_number;
    cout << "Enter marks" << endl;
    cin >> marks;
    out << name << endl;
    out << roll_number << endl;
    out << marks << endl;
    }
    out.close();
    string s1 , s2 , s3;
    ifstream in("sample.txt");
    for (int i=0;i<no_of_students;i++) {
    getline(in,s1);
    cout << s1 << endl;
    getline(in,s2);
    cout << s2 << endl;
    getline(in,s3);
    cout << s3 << endl;
    }
    cout << endl;
    return 0;
}
