#include <iostream>
using namespace std;
int main()
{
    int a=20;
    int b=20;
    int c;
    c= a + b ;
    cout << c << "\n";
    char grade='A';
    bool ispresent=true;
    float ab=0.14;
    double x =0.49; //default is bool and float is defined
    cout <<"Pretty basic ik \n";
    cout << x << "\n" << a << "\n" << ispresent << "\n" << grade << "\n" << sizeof(ab) ;// size of tells the size of the datatype of variable
    return 0;
}