#include <iostream>
#include <cstring>
using namespace std;

int main (void){
    char data[11];

    cout<<"Digite uma data";
    cin>>data;
    cout<<"Dia "<<data[0]<<data[1]<<endl;
    cout<<"Mês "<<data[3]<<data[4]<<endl;
    cout<<"Ano "<<data[6]<<data[7]<<data[8]<<data[9]<<endl;
  
    return 0;
    }