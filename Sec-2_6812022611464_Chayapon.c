#include <stdio.h>

void inputNumber () {
    printf("Enter number of transactions :");
    scanf("%d", &count);
    
    char Channel_Type[count];
    while (i<count) {
        printf("Enter Channel Type for TXN %d (O,B,A)",i+1)
        scanf("%d" ,Channel_Type[i]);
        i+1
    }
}



int main () {
    inputNumber();
}