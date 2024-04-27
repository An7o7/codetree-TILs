#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = 1;
    while (a <=n){
        if (a%3==0){
            cout << a << ' ';
        }
        a++;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}