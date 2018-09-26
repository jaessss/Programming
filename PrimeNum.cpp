#include <iostream>
#include <math.h>
using namespace std;

int main(){
    unsigned int num;
    cout << "소수를 구할 수를 입력하세요 : ";
    cin >> num;
    bool isPrime = true;

    // 2부터 N의 제곱근까지의 수로 나눠서 나눠지는 수가 있으면 반복문 종료
    for (int i=2; i<=sqrt(num); i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime) {
        cout << num << "은 소수입니다." << endl;
    }
    else {
        cout << num << "은 소수가 아닙니다." << endl;
    }

    return 0;
}
