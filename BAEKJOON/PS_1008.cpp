//
//  PS_1008.cpp
//  BAEKJOON
//
//  Created by 대수 on 2020/12/22.
//  두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.


#include <iostream>
using namespace std;
int main() {
    double a,b;
    while(1){
        cin>>a>>b;
        if(a>0 && b<10 && b!=0)
            break;
        else{
            continue;
        }
    }
    cout.precision(15);
    cout<<a/b;
}

