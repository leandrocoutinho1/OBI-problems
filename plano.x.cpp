#include<iostream>
using namespace std;

int X, N, M;
int result;

int main(void) {

    cin >> X >> N;
    result = X;

    for (int i = 0; i < N; i++){
        cin >> M;
        result += (X - M);
    }

    cout << result << endl;

  return 0;
}