#include <iostream>
using namespace std;

int main() {
    int month;
    
    // 월 입력 받기
    cout << "월을 입력하세요: ";
    cin >> month;
    
    // 해당 월의 일수 계산 및 출력
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        cout << "해당 월은 31일까지 있습니다.";
    } else if(month == 4 || month == 6 || month == 9 || month == 11) {
        cout << "해당 월은 30일까지 있습니다.";
    } else if(month == 2) {
        cout << "해당 월은 28일까지 있습니다.";
    } else {
        cout << "올바른 월을 입력하세요.";
    }
    
    return 0;
}