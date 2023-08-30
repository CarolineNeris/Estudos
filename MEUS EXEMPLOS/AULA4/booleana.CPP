#include <iostream> 
using namespace std;

int main(void) 
{
    // O tal do booleano é um operador de verdadeiro ou falso, ou seja 1 ou  respectivamente
    bool isNumber = true;  // aqui eu declarei a variavel como bool, variável é isNumber 
    bool isPositive = true, isNegative = false; // se for positivo é verdadeiro, negativo falso
    bool condition; //declarei outra booleana chamada condition
    condition = (isNumber && isPositive); // O operador lógico && (equivale a and ou e) 
    bool isEven, isOdd;
    isEven = 4 % 2 == 0; // operador de resto % - Você está declarando duas variáveis 
                        //booleanas isEven e isOdd. isEven será true se o resto da 
                        //divisão de 4 por 2 for igual a 0. Como 4 % 2 é 0, isEven será true.
    isOdd = 4 % 2;
                        //Aqui, você está atribuindo a variável isOdd o valor do resultado 
                        //da expressão 4 % 2, que é 0. Portanto, isOdd será false, porque 
                        //0 é considerado falso em contextos booleanos.
    cout << "isNumber = " << isNumber << endl;
    cout << "isPositive = " << isPositive << endl;
    cout << "isNegative = " << isNegative << endl;
    return 0;
}