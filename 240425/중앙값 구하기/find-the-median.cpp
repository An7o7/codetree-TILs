#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;

    if (a >= b){
        if (b >= c){
            cout << b;
        }
        else cout << c;
    }
    else{
        if (a >= c){
            cout << a;
        }
        else cout << c;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}
// 231