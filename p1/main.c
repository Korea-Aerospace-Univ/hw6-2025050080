#include <stdio.h>

int main(void)
{
    char x; // 최대개수 문자
    int c2 = 1; // 문자 하나는 무조건 있으므로 초기값1
    int c1 = 0; // 문자 개수
    char arr[10] = {}; // 받는 영문자 수 10
    char *p = nullptr;
    
    for(p = arr; p < arr + 10; p++){
        scanf(" %c", p);
    } // 영문자 10개 연속으로 받기

    x = arr[0]; // 모든 영문자가 하나씩 나오면 첫문자로 출력
      
    for(p = arr; p < arr + 10; p++){
        for(char *q = arr; q < arr + 10; q++){
            if(*p == *q){
                c1++; // 입력한 문자와 입력된 문자와 같은 게 있을때마다 더하기
                
                if(c1 > c2){
                   c2 = c1;
                   x = *p;
                } // 전 개수보다 많은 문자가 나오면 최대 개수를 바꾸고, 그 문자를 x에 저장
            }
        }
        c1 = 0; // 문자마다 개수를 세야 하므로 c1은 0으로 초기화
    } 
    printf("%c %d", x, c2); // 최대개수와 그 문자를 출력 

    return 0;
}
