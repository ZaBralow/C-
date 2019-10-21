#include <iostream>
#include <cstdlib>
using namespace std;


int main() 
{
	setlocale(LC_ALL, "Russian");
	int Arr[30], i=1, y=1, sum, sum_2, sum_3, total;
	
	do 
	{
		Arr[i] = rand() % 10 + 1;      //Заполнение массива случайными числами
		i++;
	}
	while (i<=30);
	
	for (int b=1; b<=30; b++) 
	{
		cout<<Arr[b];                  //Вывод массива со случайными числами
		cout<<" ";
	}

    while (y<=30)
    {
    	sum = y%7;
    	if (!sum)
    	{
    		total = total + y;         //Сумма каждого 7 числа
		};
		
		sum_2 = y%3;
		if (!sum_2)
		{
			Arr[y] = Arr[y] + 2;       //Каждое 3-е число увеличивается на 2*
		};
		
		sum_3 = y%5;
		if (!sum_3)
		{
			Arr[y] = Arr[y] - 3;       //Каждое 5-ое число уменьшается на 3*
		};
		
		y++;
	}
	
	cout<<"\nСумма каждого седьмого числа в массиве - "<<total<<endl;
	
	for (int r=1; r<=30; r++)
	{
		cout<<Arr[r];
		cout<<" ";                      //Вывод массива с *
	}
	
	return 0;
}
