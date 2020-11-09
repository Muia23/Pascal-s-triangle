/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: wil
 *
 * Created on 9 November 2020, 13:09
 */

#include <stdio.h>

/*
 * 
 */
int main() {
    int rows, coef =1, space, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++){
        for (space =1; space <= rows-i; space++ )
            printf("  ");
        for (j=0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i-j+1)/j;
            printf("%4d", coef);
        }
        printf("\n");
    }         
    return 0;
}

