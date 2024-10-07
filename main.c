#include <stdio.h>
#include <string.h>  // For strcmp function
#include <stdlib.h>  // For exit function

int main() {
    char ans[255]; 
    char* n = "n";  
    char* y = "y";

    printf("Welcome!");
    printf("\nDo you want to exit this program? [y/n]: ");
    scanf("%s", ans);

    if (strcmp(ans, y) == 0) { 
        exit(0);  
    }
    if (strcmp(ans, n) == 0) {  
        printf("конечно");  
    }

    return 0;
}