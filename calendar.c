#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int row = 0;
    int day = 1;
    if(b >= 10 && a != 0){
        printf("   ");
    }
    for(int i = 0 ; i < 7; i++){
        if(b >= 10 && i == a - 1){
            printf(" ");
        }
        else if(b >= 10 && i < a){
            printf("   ");
        }
        else if(i < a){
            printf("  ");
        }
        else{
            if(b >= 10){
                printf("%d  ", day); // 3 spaces
            }
            else{
                printf("%d ", day); // 1 space
            }
            if(i == 0 && a == 0 && b >= 10){
                printf(" ");
            }
            day++;
        }
        if(day > b) break;
    }
    printf("\n");
    while(true){
        if(day > b) break;
        printf("%d", day);
        if(day < 10 && b >= 10){
            printf(" ");
        }
        day++;
        for(int i = 2 ; i <= 7 ; i++){
            if(day > b) break;
            else{
                if(b >= 10 && day >= 10){
                    printf(" ");
                }
                else if(b >= 10 && day < 10){
                    printf("  ");
                }
                else{
                    printf(" ");
                }
                printf("%d", day);
                day++;
            }
        }
        row++;
        printf("\n");
    }
}
