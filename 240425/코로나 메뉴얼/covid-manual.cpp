#include <iostream>
using namespace std;
int main() {
    char a,b,c;
    int a1,b1,c1, e=0;

    cin >> a >> a1 >> b >> b1  >> c >> c1;

    if (a=='Y' && a >= 37){
        e+=1;
    }
    if (b=='Y' && b >= 37){
        e+=1;
    }
    if (c=='Y' && c >= 37){
        e+=1;
    }
    if ( e >= 2){
        cout << 'E';
    }
    else {
        cout << 'N';
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}