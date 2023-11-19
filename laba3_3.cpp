#include <iostream>
#include <vector>
#include <string>
#include <time.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
	double m[20];
    srand(time(NULL));
    cout << "Начальный массив:" << endl;
    for (int i = 0; i < 20; ++i) {
        m[i] = rand() % 99 + 1;
        cout << m[i] << " ";
    }
    int x = 0;
    for (int i = 0; i < 3; ++i) {
        x = m[17 + i];
        m[17 + i] = m[i];
        m[i] = x;
    }
    cout << endl << "Новый массив:" << endl;
    for (int i = 0; i < 20; ++i) {
        cout << m[i] << ' ';
    }
}
