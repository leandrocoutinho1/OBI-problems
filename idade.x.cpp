#include<iostream>
using namespace std;

int N1, N2, N3;

int main(void) {

  cin >> N1 >> N2 >> N3;

  if ((N1 <= N2 && N2 <= N3) || (N3 <= N2 && N2 <= N1)) {
        cout << N2 << endl;
    } else if ((N2 <= N1 && N1 <= N3) || (N3 <= N1 && N1 <= N2)) {
        cout << N1 << endl;
    } else {
        cout << N3 << endl;
    }

  return 0;
}