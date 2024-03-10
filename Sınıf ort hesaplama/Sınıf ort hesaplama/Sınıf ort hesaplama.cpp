#include <stdio.h>
int  b = 0;
int average(int a) {
    b = a + b;

        return b;
}
int main()
{
    int a[100], i = 0, c, w, k;
    float x;
    while( i<= 100) {
        again:
        printf("enter a grade ");
        scanf_s("%d", &a[i]);
        w=average(a[i]);
        printf("if you want enter new grade press 1 otherwise press 0 ");
        scanf_s("%d", &c);
        if (c == 1) {
            i++;
            goto again;
        }
        else {
            k = i + 1;
            x = w /k  ;
            printf("Your class average grade is %f", x);
                 
        }

    }


}

