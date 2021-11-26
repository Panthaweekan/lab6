#include<iostream>
using namespace std;

int main(){
    int interger ;
    int Even = 0 ;
    int Odd = 0 ;
    while ( interger != 0 ){

    cout << "Enter an integer: ";
    cin >> interger ;
        if( interger % 2 == 0){
            Even++;
            if( interger == 0 ){
                Even--;
            }

        }else{
            Odd++;
        }

    }
    cout << "#Even numbers = "<< Even << "\n";
    cout << "#Odd numbers = " << Odd;
    return 0;
}
