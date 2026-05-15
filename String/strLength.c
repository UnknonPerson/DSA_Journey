#include<stdio.h>

int main(){

    char str[20] = "Tanishk Prasad";
    int length = 0;

    for(int i=0; str[i] != '\0'; i++){
        length++;
    }

    printf("The length of the string is %d", length);
    printf("\n %s", str);
    printf("\n %c", str[2]);

    return 0;
}