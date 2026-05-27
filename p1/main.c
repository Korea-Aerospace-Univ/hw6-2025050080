int main(void)
{
    int x;
    int c2 = 1;
    int c1 = 0;
    int arr[10] = {};
    int *p = nullptr;
    
    for(p = arr; p < arr + 10; p++){
        scanf(" %c", p);
    }

    x = *p;
      
    for(p = arr; p < arr + 10; p++){
        for(int *q = arr; q < arr + 10; q++){
            if(*p == *q){
                c1++;
                
                if(c1 > c2){
                   c2 = c1;
                   x = *p;
                }
            }
        }
        c1 = 0;
    } 
    printf("%c" "%d", x, c2);

    return 0;
}
