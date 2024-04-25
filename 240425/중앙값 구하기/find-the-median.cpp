#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;

    if (b > c){
        if (b > a && a > c){
            cout << a;
        }
    }
    else{
        if (c > a && a > b){
            cout << a;
        }
    }
    if (a>c){
        if (a > b && b > c){
            cout << b;
        }
    }
    else {
        if (c > b && b > a){
            cout << b;
        }
    }
    if (a>b){
        if (a>c && c > b){
            cout << c;
        }
    }
    else {
        if (b > c && c > a){
            cout << c;
        }
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}
//  3 2 1