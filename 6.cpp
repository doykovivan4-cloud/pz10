#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;
int sum = 1;
for (int i = 1; i <= N; i++) {
    sum *= i;
}
cout << sum;


    return 0;
}
