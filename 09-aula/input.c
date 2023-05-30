#include <stdio.h>
#include <string.h>

int main(){

    char name[25]; //bytes
    int age;

    printf("What's your name? ");

    //scanf("%s", &name); scanf cannot read white spaces, when i need that, i have to use fgets
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
    // when you got the name there, it will inclue one \n at the final, u have to replace that;

    printf("\nHow old are you? ");
    scanf("%d", &age);

    printf("Hello %s, how are you? \n", name);
    printf("You are %d years old \n", age);

    return 0;
}