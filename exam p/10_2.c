/****************************************
Author:
Date Created:
Date Modified:
Purpose:
*****************************************/
#include <stdio.h>
//function prototype
void personalinfo();

int main () {
//function call
	personalinfo("malitha",23451,"walallavita");
}
/********************
Input: No input
Return: None
Purpose: To print out the personal information
*******************/
void personalinfo(char name[],int stuno,char addres[])
{
//print your name here
//print your student id
//print your address here
	printf("Name-%s \nStudentid-%d \nAddres-%s",name,stuno,addres);
}