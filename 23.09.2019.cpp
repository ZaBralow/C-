#include <iostream>
#include <cmath>
using namespace std;

int main() {
//	setlocale(LC_ALL, "Russian");
//	
//	double V, S, U, T, t1, t2;            //����������
//	
//	cout<<"������� �������� - ";          //���� �������� �����
//	cin>>V;
//	cout<<"������� ���������� - ";        //���� ����������
//	cin>>S;
//	cout<<"������� �������� ������� - ";  //���� �������� �������
//	cin>>U;
//	
//	t1 = S/(V+U);                         //�������� �� �������
//	t2 = S/(V-U);                         //�������� ������ �������
//	
//	T = t1+t2;                            //���������� ������ �������
//	cout<<"����� ����� �������� - "<<T<<endl;  //����� ������ �������
	
	setlocale(LC_ALL, "Russian");
	
	double a, b, c, dc, x1, x2;
	
	
	
	cout<<"a - ";
	cin>>a;
	cout<<"b - ";
	cin>>b;
	cout<<"c - ";
	cin>>c;
	
	dc = pow(b, 2)-4*a*c;
	
	
	if (dc < 0) {
		cout<<"nema"<<endl;
	}
	else if (dc == 0) {
		x1 = (-b+sqrt(dc))/(2*a);
		cout << "dc = " << x1 << endl << "x1 = " << x1 << endl;
	}
	else {
		x1 = (-b+sqrt(dc))/(2*a);
		x2 = (-b-sqrt(dc))/(2*a);
		
		cout << "dc = " << dc << endl << "x1 = " << endl << "x2 = " << x2 << endl;
	}
	
	
	
	
	
	cout<<"dc - "<<dc<<endl;
	cout<<"x1 - "<<x1<<endl;
	cout<<"x2 - "<<x2<<endl;
	
	return 0;
}
