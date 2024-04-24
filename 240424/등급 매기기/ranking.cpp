#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;

    if (a >=90){
        cout<<'A';
    }
    else if (a>=80&& a<90){
        cout << 'B';
    }
    else if (a>=70&& a<80){
        cout << 'C';
    }
    else if (a>=60&& a<70){
        cout << 'D';
    }
    else{
        cout << 'F';
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}