#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;

    cout << ((a>=b)? b>=c? c:b : a>=c ? c : a);
    // 여기에 코드를 작성해주세요.
    return 0;
}