#include <iostream>

using namespace std;
using std::string;
using std::endl;
using std::cout;
using std::cin;

int main (){

cout<<" \n";
string nameSurname;
cin >> nameSurname ;
int Age ;
cin >> Age;
string City;
cin >> City;
int x ;
cin >> x ;
string  Country ;
cin >> Country ;
int monthlySalary ;
cin >> monthlySalary ;
int yearlySalary = monthlySalary * 12 ;

cout <<"**********************\n\n" ;
cout << "Name: " << nameSurname << ".\n";
cout << "Age \t: " << Age <<"Years.\n";
cout << "City\t: " << City <<".\n" ;
cout << "Country:  " << Country << ".\n";
cout << "Monthly Salary\t:" << monthlySalary << ".\n" ;
cout << "Yearly Salary:\t" << yearlySalary << ".\n" ;
"Gender: M\n" ;
"Married : \n" ;

cout<<"**********************";



return 0;
}