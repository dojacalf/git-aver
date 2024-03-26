#include <iostream>

#include <cmath>
#include <string>
#include <vector>

using namespace std;
//dividir dos numeros sin usar el sinbolo de divicion
int divide(int a,int b){
    int rpta;
    while(a>b){
        a = a-b;
           rpta++ ;

    }
    return rpta;
}
int main() {
    int a,b ;
    cin >> a>>b;
    cout << "la divicion entrea a y b es :"<< divide(a,b);
  return 0;
}