#include <iostream>
//using namespace std;
//using std::cout;
using std::string;
using std::endl;

int main() {

  int n1{20} , n2{30} , n3{10};
  int sum = 0;
  sum = n1 + n2 + n3;
  
  std::cout<<n1<< " +\n";
  std::cout<<n2<< " + \n";
  std::cout<<n3<< " + \n";
  std::cout<<"______________________________"<<"\n\n";
  std::cout<<"Total = "<< sum << "\n\n" ;

  return 0;
}
