#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;

    int b = a==100 ? 1 : 0;

    if (b == 1){
        cout << "pass";
    }
    else if (b == 0){
        cout << "failure";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}