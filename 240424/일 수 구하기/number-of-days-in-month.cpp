#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;

    if((a % 4 == 0 && a % 100 != 0) || a % 400 == 0){
        if (a == 2){
            cout << 29;
        }
        else cout << 31;
     }
	else{
        if (a == 2){
            cout << 28;
        }
        else cout << 31;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}