#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    
    if (a<3000 && a >=1000){
        cout << "mask";
    }
    else if (a>=3000){
        cout << "book";
    }
    else if (a <1000){
        cout << "no";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}