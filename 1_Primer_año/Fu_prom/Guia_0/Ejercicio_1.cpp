#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<< "ingrese el año de nacimiento ";
    cin>>n;
    n=2024-n;
    cout <<" Su edad es:  "<< n ;
    return 0;
}