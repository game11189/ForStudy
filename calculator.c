#include <stdio.h>

int main()
{
    /*
        gets inputs a,
        op = {+, -, *, /},
        b
        then prints a op b
    */
    int a, b;
    char op;
    scanf("%d", &a);
    scanf(" %c", &op);
    scanf(" %d", &b);

    while(1){ // loops forever
        if(op == '+'){
            a = a + b;
            printf("%d\n", a);
        }
        else if(op == '-'){
            a = a - b;
            printf("%d\n", a);
        }
        else if(op == '*'){
            a = a * b;
            printf("%d\n", a);
        }
        else if(op == '/'){
            a = a / b;
            printf("%d\n", a);
        }
        scanf(" %c", &op);
        scanf(" %d", &b);
    }
}
