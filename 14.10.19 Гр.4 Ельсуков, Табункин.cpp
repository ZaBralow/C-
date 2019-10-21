#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	
	int size = 10, numbers[size], temp;                   //Обозначение переменных
	for(int a = 1; a <= size; a++) {                      //Заполнение массива 
		cout<<"Ваш "<<a<<" номер = "; 
		cin>>numbers[a];
		cout<<endl;
	}
	for(int i = 0; i <= size - 1; i++) {                  //Сортировка массива методом пузырька
		for(int a = 0; a <= size - i - 1; a++) {
			if (numbers[a] > numbers[a + 1]) {
				temp = numbers[a];                        //Смена элементов местами
				numbers[a] = numbers[a + 1];
				numbers[a + 1] = temp;
			}
		}
	}
	for(int a = 1; a <= size; a++) {                      //Вывод отсортированного массива
		cout<<"Ваш "<<a<<" номер = "<<numbers[a]<<endl;
	}
	return 0;
}

