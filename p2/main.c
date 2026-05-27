#include <stdio.h>

int main(void)
{
    int N;
    int arr1[20]; // 들어가는 수가 1부터 20까지
    int arr2[20];
    int *p = nullptr;
    int *q = nullptr;
    
    scanf("%d", &N); 
    
    for(p = arr1; p < arr1 + N; p++){
        scanf(" %d", p);} // 첫번째부터 
        
    for(q = arr2 + N; q > arr2; q--){
        scanf(" %d", q);} // 마지막부터
        
    for(p = arr1, q = arr2; p < arr1 + N, q < arr2 + N; p++, q++){
        printf(" %d", *p + *q); // 합 출력
    }

    

    return 0;
}
