#include<bits/stdc++.h>
using namespace std;

// class Add{
//     public :

//         int sum(int x,int y){
//             cout<<"Sum of 2 ints"<<endl;
//             return x+y;
//         }

//         int sum(int x,int y,int z){
//             cout<<"Sum of 3 ints"<<endl;
//             return x+y+z;
//         }

//         double sum(double x,double y){
//             cout<<"Sum of 2 doubles"<<endl;
//             return x+y;
//         }
// };

class Complex{
    private:
    int real;
    int imag;

    public:
    Complex(){
        real=imag=-1;
    }

    Complex(int r,int i):real(r),imag(i){
        cout<<"Real part is"<<r<<"Imag part is i"<<i<<endl;

    }

    // Syntax => Ref_Type operator <op> (args){
        // Task karo aur phir return karo
    //}

    Complex operator + (const Complex &B){
        Complex temp;
        temp.real=this->real + B.real;
        temp.imag=this->imag + B.imag;
        cout<<temp.real<<" +i"<<temp.imag<<endl;
        return temp;
    }

};


int main(){

    // Add a;
    // a.sum(2,5);
    // a.sum(3,5,9);
    // a.sum(2.4,6.2);

    Complex A(2,30);
    Complex *B = new Complex(5,6);  // ye wrong dega kyunki yha tum B ko pointer jaise declare kiya ho

    Complex C=A + (*B);      // A+B ko aise samjho ki B A mein add ho rha to this->real denotes A ka real and B is passed as class
    return 0;
}


// Polymorphism means a function or a operator to work in different ways based on the object it is working upon or actual need
// Two types 
    // Compile Time polymorphism (Static)   Types- Function Overloading, Operator Overloading
    // Run Time polymorphism    (Dynamic)

// Function Overloading 
    //=>Overloading occurs when a class contains multiple methods sharing a name but differing in argument type or argument count.
    // eg int sum(int x,int y), double sum(double x, double y)  or int sum(int x,int y, int z)
    // different in count or type,

// Operator Overloading
    //=> Jaise complex numbers ka sum nhi aata hai + sign ko , to hum + sign pe overloading karenge jisse wo do complex number ko bhi + karle.

// Operators that are available for overloading in cpp

//Arithmetic Operators => +,-,*,%,/
// Relational Operators => ==,<,>,<=,>=  
// Assignment Operators
// Bitwise Operators
// Increment Operators

