#include<stdio.h>

struct process{
    int no,BT,AT,TAT,WT,Prrt;
};


void main()
{
    struct process processes[5];
    struct process temp;
    int ats[] = {2,1,0,4,3};
    int bts[] = {2,2,4,3,1};
    int priorities[] = {1,2,3,4,5};

    for(int i=0;i<5;i++)
    {
        processes[i].no = i;
        processes[i].BT = bts[i];
        processes[i].AT = ats[i];
        processes[i].Prrt = priorities[i];
    }

    for(int i=0;i<5;i++)
    {
        printf("%d",processes[i].no+1);
    }

    printf("\n");

    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(processes[i].AT > processes[j].AT){
                temp = processes[i];
                processes[i] = processes[j];
                processes[j]=temp;
            }
        }
    }

    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d",processes[i].AT);
    }

    printf("\nThe turnaround times are as follows\n");

    int prev_TAT = 0;

    for(int i=0;i<5;i++)
    {
        processes[i].TAT = (prev_TAT + processes[i].BT) -processes[i].AT;
        prev_TAT += processes[i].BT;
    }

    for(int i=0;i<5;i++)
        printf("%d",processes[i].TAT);


    printf("\nThe waiting times are as follows\n");

    prev_TAT = 0;

    for(int i=0;i<5;i++)
    {
        processes[i].WT = prev_TAT-processes[i].AT;
        prev_TAT += processes[i].BT;
    }

    for(int i=0;i<5;i++)
        printf("%d",processes[i].WT);
}


