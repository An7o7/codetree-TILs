#include <iostream>
using namespace std;
int main() {
    int a,b;
    float c;
    cin >> a >> b;

    c = (float)a+b;
    c /= (a-b);

    cout << fixed;
    cout.precision(2);
    cout << c;
    // 여기에 코드를 작성해주세요.
    return 0;
}