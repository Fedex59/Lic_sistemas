#include <iostream>

using namespace std;

double compara(int num1, int num2){

    if (num1<num2)
    return (num1);

    else
    return (num2);
}

int n1, n2;
int main(int argc, char const *argv[])
{
    cout<<"ingrese 2 numeros "<<endl;
    cin >> n1;
    cin >> n2;

    cout<< "El menos es: " << compara(n1,n2);


return 0;
}