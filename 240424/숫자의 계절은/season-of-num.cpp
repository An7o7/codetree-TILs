#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;

    if (a<=5 && a>=3){
        cout << "Spring";
    }
    else if (a<=8 && a>=6){
        cout << "Summer";
    }
    else if (a<=11 && a>=9){
        cout << "Fall";
    }
    else if ((a>=1 && a<=2) || a==12){
        cout << "Winter";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}