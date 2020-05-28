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
 * @file <stats.h>
 * @brief <This is the Header file for the main file for first assignment>
 *
 * <File will include functions to be called out in the main file>
 *
 * @author <Ameya Salvi>
 * @date <May 10 2020 >
 *
 */


#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>

int n;
int num[40];
int i,j,k;
int asc[40];

int userarray(){
printf("You Entered:");
printf("\n");
for(j=0;j<n;j++){
	printf("%d,",num[j]);
	}
}

/********************Finding Mean*************************/

float mean(){	
float q=n;
float sum=0;
for(i=0;i<n;i++){
	sum=sum+num[i];
	}
float Mean=sum/q;
printf("mean is:%f",Mean);
printf("\n");     
}

/**********************Finding Median**********************/ 

int median(){
int temp;                                       
for(j=0;j<n;j++){                          
	for(i=0;i<n-1;i++){
		if(num[i]>num[i+1]){
 			temp=num[i];        								    				num[i]=num[i+1];       					num[i+1]=temp;    					}                    				}	  	                                              
								}                                        
				printf("Ascending Order:");
					printf("\n"); 
						for(j=0;j<n;j++){
									printf("%d,",num[j]);
											}                                                     
							printf("\n"); 
								printf("\n");   
									int l,m,Median;
										if(n%2==0){
													l=n/2;
															Median=(num[l]+num[l-1])/2;
																	}
											else{
														m=n-1;
																l=m/2;
																		Median=num[l];
																				}
												printf("Median is:%d",Median); 
													printf("\n"); 
														printf("\n");   
}

/**************Sorting in Descending Order********************/

int sort(){
		int desc[40];
			for(i=0;i<n;i++){
						desc[i]=num[n-1-i];
								}
				printf("Descending Order:");
					printf("\n"); 
						for(j=0;j<n;j++){
									printf("%d,",desc[j]);
											}                                                                       
							printf("\n"); 
								printf("\n");   
}

/*****************Finding Minimum and Maximum***************/                   

int maximum(){
		int max=num[0];
			for(i=0;i<n;i++){
						if(num[i]>max){
										max=num[i];
													}
								}
				printf("\n");
					printf("Largest number is %d",max);
						printf("\n");
							}

int minimum(){
		int min=num[0];
			for(i=0;i<n;i++){
						if(num[i]<min){
										min=num[i];
													}
								}
				printf("\n");	
					printf("Smallest number is %d",min);
						printf("\n");  
							}

#endif

		/*End*/
		
