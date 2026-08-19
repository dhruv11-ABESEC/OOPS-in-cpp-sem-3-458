#include <iostream>
using namespace std;

inline int square(int n){
    return n*n;
}
int add(int a,int b=10){
    return a+b;
}

int calculate(int a,int b){
    return a+b;
}
int calculate(int a,int b,int c){
    return a+b+c;
}
double calculate(double a,double b){
    return a+b;
}

int main(){
    cout<<"inline function"<<endl;
     cout<<"square of 5="<<square(5)<<endl;
      cout<<"square of 5="<<square(5)<<endl;
      cout << "\nDefault Argument Function" << endl;

cout << "Add(30)=" << add(30) << endl;

cout << "Add(40,50)" << add (40,50) << endl;

cout << "\nFunction Overloading" << endl;

cout << "Addition of two integers" << calculate(20,300) << endl;

cout << "Addition of three integers" << calculate(20,30,40) << endl;

cout << "Multiplication of two doubles" << calculate(2.5,4.0) << endl;

return 0;

}
