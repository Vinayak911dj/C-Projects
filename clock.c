/*********************************************************************************
Name: Vinayak Potadar
Discription: C project on Digital Timer Clock 
Date:26.06.2024

***********************************************************************************/
#include<stdio.h>
#include<windows.h>

int main()
{
    int h,m,s;
    int d=1000; //Delay for 1000ms and will used in the function sleep
    printf("Set the timeer in hh:mm:ss format: \n");
    scanf("%d:%d:%d",&h,&m,&s);
    if(h>12 || m>60 || s>60)
    {
        printf("ERROR!!\n");
        exit(0);
    }
    while(1)  //This loop will do infinite loop and anything inside the loop will be repeted itself.
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n Clock: ");
        printf("\n %02d:%02d:%02d",h,m,s);  //this writes our TIME in this format 00:00:00
        Sleep(d);                           //this function sleep slows down the while loop make it like real clock.
        system("cls");                      //This clears the sceeen
    }

}