#include<iostream>
using namespace std;

char result;
int win = 0;
int lose = 0;

int main(void) {
    for (int i = 0; i < 6; i++){
        cin >> result;
        if(result == 'P'){
            lose += 1;
        }
        else if(result == 'V'){
            win += 1;
        }
    }
    
    if(win == 5 || win == 6){
        cout << 1 << endl;
    }
    else if(win == 3 || win == 4){
        cout << 2 << endl;
    }
    else if(win == 1 || win == 2){
        cout << 3 << endl;
    }
    else{
        cout << -1 << endl;
    }

  return 0;
}