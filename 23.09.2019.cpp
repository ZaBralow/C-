#include <iostream>
#include <cmath>
using namespace std;

int main() {
//	setlocale(LC_ALL, "Russian");
//	
//	double V, S, U, T, t1, t2;            //Переменные
//	
//	cout<<"Введите скорость - ";          //Ввод скорости лодки
//	cin>>V;
//	cout<<"Введите расстояние - ";        //Ввод расстояния
//	cin>>S;
//	cout<<"Введите скорость течения - ";  //Ввод скорости течения
//	cin>>U;
//	
//	t1 = S/(V+U);                         //Скорость по течению
//	t2 = S/(V-U);                         //Скорость против течению
//	
//	T = t1+t2;                            //Вычисление общего времени
//	cout<<"Общее время движения - "<<T<<endl;  //Вывод общего времени
	
	setlocale(LC_ALL, "Russian");
	
	double a, b, c, dc, x1, x2;
	
	
	
	cout<<"a - ";
	cin>>a;
	cout<<"b - ";
	cin>>b;
	cout<<"c - ";
	cin>>c;
	
	dc = pow(b, 2)-4*a*c;
	
	int case_;
	
	if(dc<0) case_ = 1;
	if(dc==0) case_ = 2;
	if(dc>0) case_ = 3;
	
	
	
	switch(case_) {
		case 1:
		cout<<"Нет корней"<<endl;
		break;
	    case 2: 
		x1 = (-b+sqrt(dc))/(2*a);
		cout << "dc = " << dc << endl << "x1 = " << x1 << endl;
		case 3:
		x1 = (-b+sqrt(dc))/(2*a);
		x2 = (-b-sqrt(dc))/(2*a);
		cout << "dc = " << dc << endl << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
	    break;
    }
	
	
//	if (dc < 0) {
//		cout<<"Нет корней"<<endl;
//	}
//	else if (dc == 0) {
//		x1 = (-b+sqrt(dc))/(2*a);
//		cout << "dc = " << x1 << endl << "x1 = " << x1 << endl;
//	}
//	else {
//		x1 = (-b+sqrt(dc))/(2*a);
//		x2 = (-b-sqrt(dc))/(2*a);
//		
//		cout << "dc = " << dc << endl << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
//	}
	
	
	
	
	return 0;
}
