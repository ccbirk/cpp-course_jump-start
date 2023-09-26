#include <iostream>

//using namespace std;
using std::string;
using std::endl;
using std::cout;
using std::cin;

int main (){

cout<<" \n";
string name;
string surname;
int Age ;
string City;
string  Country ;
int monthlySalary ;

string Gender;

 cout << " What is your name? " ;
 cin >> name ;

cout << " What is your surname? " ;
cin >> surname ;

 cout << " What is your age? ";
 cin >> Age; 

cout << " What is your city's name? " ;
cin >> City ;

cout << " What is your country's name? ";
cin >> Country ;
 
cout << " What is your monthly salary? ";
cin >> monthlySalary ;

int yearlySalary = monthlySalary * 12 ;

cout << " What is your gender, M/F ? " ;
cin >> Gender ;




cout <<"**********************\n\n" ;
cout << "Name\t: " << name + " " << surname <<".\n";
cout << "Age \t: " << Age <<" Years.\n";
cout << "City\t: " << City <<".\n" ;
cout << "Country :  " << Country << ".\n";
cout << "Monthly Salary\t:" << monthlySalary << ".\n" ;
cout << "Yearly Salary:\t" << yearlySalary << ".\n" ;
cout << "Gender\t: M\n" ;
cout << "Married : 1\n" ;

cout<<"**********************\n" ;



return 0;
}
