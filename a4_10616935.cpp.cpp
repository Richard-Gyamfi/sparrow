#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if((a>=b)&&(a%b==0))
        return a;
    else
        gcd(a,(b%a));
}
int main(int argc, char **argv)
{
    int a_1;
    int a_2;
    cout<<"A PROGRAM TO CHECK THE GCD OF TWO INTEGERS"<<endl;
    cout <<"PLEASE ENTER YOUR FIRST POSITIVE INTEGER"<<endl;
    cin>>a_1;
    cout <<"PLEASE ENTER YOUR SECOND POSITIVE INTEGER"<<endl;
    cin>>a_2;
    gcd(a_1,a_2);

    cout <<"GCD = "<<gcd(a_1,a_2)<<endl;
    return 0;
}
