#include <iostream>
using namespace std;
using std::cout;
using std::string;
using std::endl;

int main() {

  string doubleEnter = {"\n\n"};
  int n1{20} , n2{30} , n3{10} ;
  cout<<"\n"<<n1<< " +\n";
  cout<<n2<< " + \n";
  cout<<n3<<doubleEnter;

  cout<<"______________________________"<<doubleEnter;
       
  int sum = 0;
  sum = n1 + n2 + n3;
    cout<<"Total = \n"<<sum;




    
  return 0;
}
