#include <iostream>
using namespace std;

int main() {
    int month;
    int days;

    
    
    cin >> month;

    // 해당 월의 일수 계산
    if (month == 2) {
        days = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        days = 31;
    }