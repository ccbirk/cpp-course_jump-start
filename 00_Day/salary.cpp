#include <iostream>

using namespace std;
using std::string;
using std::endl;
using std::cout;
using std::cin;

int main (){

cout<<" \n";
string name;
string surname;
 cout << "What is your name ?" << cin >> name ;
 cout << "What is your surname?" << cin >> surname;
 
 int Age ;

 cout << "What is your age?" << cin >> Age; 

 cout << "What is your salary?" ; cin >> monthlySalary ;




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
cout << "Name: " << name + " " << surname <<".\n";
cout << "Age \t: " << Age <<"Years.\n";
cout << "City\t: " << City <<".\n" ;
cout << "Country:  " << Country << ".\n";
cout << "Monthly Salary\t:" << monthlySalary << ".\n" ;
cout << "Yearly Salary:\t" << yearlySalary << ".\n" ;
"Gender: M\n" ;
"Married : \n" ;

cout<<"**********************\n" ;



return 0;
}
