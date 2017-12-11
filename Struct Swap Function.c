/*********************************************
* Project-4-Struct Swap Function
* This is a function which :
* takes the addresses of 2 structures 
* then swap them 
**********************************************/


/*includes*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

/*definition of standard data types*/
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;
typedef float f32;
typedef double f64;
typedef long double f128;

/*define a struct named person contains user name and id*/
typedef struct
{
    u8 name[10];
	u32 id;
}person;

/*function prototyping*/
void swap(person* ,person* );

/*main code*/
void main()
{
	/*define 2 objects called person1 &person2 of type struct*/ 
	person person1;
	person person2;
	
	/*fill data of object1*/
	strcpy(person1.name,"asmaa");
	person1.id=12345678;
	
	/*fill data of object2*/
	strcpy(person2.name,"ahmed");
	person2.id=10111213;
	
	/*call function to swap 2 objects*/
	swap(&person1,&person2);
	
	/*print tow objects after swapping*/
	printf("\nperson1 name is : %s",person1.name);
	printf("\nperson1 id is : %d",person1.id);
	
	printf("\nperson2 name is : %s",person2.name);
	printf("\nperson2 id is : %d",person2.id);
}

/*function definition for swapping*/
void swap(person* per1, person* per2)
{
	person temp;                         /*define temporary object of same type as struct person*/
	
	/*swap names*/
	strcpy(temp.name,per1->name);        
	strcpy(per1->name,per2->name);
	strcpy(per2->name,temp.name);
	
	/*swap id*/
	temp.id=per1->id;
	per1->id=per2->id;
	per2->id=temp.id;
}
