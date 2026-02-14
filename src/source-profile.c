#include <stdio.h>

int main() {
    char name[50];
    char group[20];

    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your group: ");
    scanf("%s", group);
    
    printf("Hello, %s from group %s!\n", name, group);
    
    return 0;
}