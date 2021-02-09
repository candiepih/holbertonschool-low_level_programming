#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98
 * @n: integer starting from
 * Description: prints all natural numbers from
 * n to 98, followed by a new line
 */
void print_to_98(int n){
    if (n <= 98) {
        int i;
        for (i = n; i <= 98; i++){
            printf("%d", i);
            if (i != 98){
                printf(", ");
            }
        }
        printf("\n");
    }else {
        int i;
        for (i = n; i >= 98; i--){
            printf("%d", i);
            if (i != 98){
                printf(", ");
            }
        }
        printf("\n");
    }
	return;
}
