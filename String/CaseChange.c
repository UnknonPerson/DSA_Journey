#include<stdio.h>

int main(){

    char str[20] = "Tanishk Prasad";
    int length = 0;

    //Method to convert string to uppercase
    // for(int i=0; str[i] != '\0'; i++){
    //     if(str[i] >= 97 && str[i] <=122){
    //         str[i] = str[i] - 32;
    //     }
    // }

    //Toggle case

    for(int i=0; str[i] != '\0'; i++){
        if(str[i] >= 97 && str[i] <=122){
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 65 && str[i] <=90){
            str[i] = str[i] + 32;
        }
    }

    printf("The string in toggle case is %s", str);
    return 0;
}