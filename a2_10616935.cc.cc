#include <iostream>

using namespace std;

int main()
{
  int num1, a;
  cout << "Enter a positve integer : "     <<endl;
  
  cin >> num1;
  
  
  for (a=2; a<num1; a++)

  {
      if(num1% a==0)
      {
          cout << num1 << "is not a prime number."   <<endl;
      }
       else
 {
     cout <<num1 << "is  a prime number."   <<endl;
     
 }

  }
  return 0;
}



