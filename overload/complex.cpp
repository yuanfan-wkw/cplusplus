#include <iostream>
using namespace std;
class Complex{
private :
	int real;
	int imag;
public :
	Complex(int r,int i):real(r),imag(i){}
	friend Complex operator + (Complex com1,Complex com2);
	friend Complex operator - (Complex com1,Complex com2);
	void print();
};


Complex operator + (Complex com1,Complex com2){
		return Complex(com1.real + com2.real,com1.imag + com2.imag);
}
Complex operator - (Complex com1,Complex com2){
		return Complex(com1.real - com2.real,com1.imag - com2.imag);
}
	
	
void Complex::print(){
	if(imag == 0){
	cout<<real<<endl;
	}else if(imag >0){
		cout<<real<<"+"<<imag<<"i"<<endl;
	}
	else{
		cout<<real<<imag<<"i"<<endl;
	}
}


int main(){

Complex p1(1,1);
Complex p2(-100,-100);

Complex p3=p1+p2;

p3.print();

return 0;
}





 
