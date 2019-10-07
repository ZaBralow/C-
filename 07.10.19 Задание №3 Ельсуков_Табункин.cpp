#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	setlocale(LC_ALL, "Russian");
    int n;
    double r = 0;
    cout <<"¬ведите число - ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        r = 1/pow((i + 1), 2); 
    }
    cout << r;
    return 0;
}
