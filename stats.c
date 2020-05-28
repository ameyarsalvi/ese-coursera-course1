/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <This is the main file for the first assignemrnt >
 *
 * <The execution of this files provide statistics for the array provided in the assignment detials. After that, the program asks user to input array of their choice and provides stastics on that array>
 *
 * @author <Ameya Salvi>
 * @date <May 28,2020 >
 *
*/

#include "Header.h"
int n=40;

void main(){
	int test[] = { 34, 201, 190, 154,   8, 194,   2,   6,
		       114, 88,   45,  76, 123,  87,  25,  23,
		       200, 122, 150, 90,   92,  87, 177, 244,
		       201,   6,  12,  60,   8,   2,   5,  67,
	               7,  87, 250, 230,  99,   3, 100,  90};

for(i=0;i<n;i++){
	num[i]=test[i];
	}

mean();
printf("\n");
median();
printf("\n");
sort();
printf("\n");
maximum();
printf("\n");
minimum();


printf("\n");
printf("How Many numbers you want to enter? You are allowed upto 40 numbers\n");
scanf("%d",&n);
printf("Enter those %d numbers\n",n);
for(k=0;k<n;k++){
	scanf("%d",&num[k]);
	}
userarray();
printf("\n");

printf("Statistics for the provided array are \n");

mean();
printf("\n");
median();
printf("\n");
sort();
printf("\n");
maximum();
printf("\n");
minimum();


}




