#include <iostream>
using namespace std;
int main() {
    int h,w,bmi;
    cin >> h >> w;
    bmi =  (w*10000)/(h*h);
    
    cout << bmi << endl;

    if (bmi>=25){
        cout << "Obesity";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}