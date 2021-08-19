#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    int g=0,i;
    static long unsigned int a,b,c,d,e,f,h;
    while(g!=1)
    {
        system("cls");
        printf("!!!-----WELCOME TO BIHAR ELECTION----!!!\n");
        printf("Press :\n1) BJP\n2) Congress\n3) AAP\n4) JDU\n5) RJD\n6) NOTA\n7) OTHER\n\n");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
                a++;
                printf("Your vote is accepted!!!\nThanks for giving vote!!!\n");
                Sleep(1000);
                break;
            case 2:
                b++;
                printf("Your vote is accepted!!!\nThanks for giving vote!!!\n");
                Sleep(1000);
                system("cls");
                break;
            case 3:
                c++;
                printf("Your vote is accepted!!!\nThanks for giving vote!!!\n");
                Sleep(1000);
                system("cls");
                break;
            case 4:
                d++;
                printf("Your vote is accepted!!!\nThanks for giving vote!!!\n");
                Sleep(1000);
                system("cls");
                break;
            case 5:
                e++;
                printf("Your vote is accepted!!!\nThanks for giving vote!!!\n");
                Sleep(1000);
                system("cls");
                break;
            case 6:
                f++;
                printf("Your vote is accepted!!!\nThanks for giving vote!!!\n");
                Sleep(1000);
                system("cls");
                break;
            case 7:
                h++;
                printf("Your vote is accepted!!!\nThanks for giving vote!!!\n");
                Sleep(1000);
                system("cls");
                break;
            case 10:
                g=1;
                break;

            default:
                printf("!!!---Not a valid choice!!!Enter again a valid choice---!!!\n!!!Your vote is not accepted!!!\n----------Re-Enter-------------");
                Sleep(3000);
                system("cls");
                break;
        }
    }
    long unsigned int k,j,l,A[7]={a,b,c,d,e,f,h};
    k=A[0];
    l=0;
    for(j=0;j<7;j++)
    {
        if(j==0)
            printf("BJP Party gots %lu votes\n",A[j]);
        else if(j==1)
            printf("CONGRESS Party got %lu votes\n",A[j]);
        else if(j==2)
            printf("AAP Party got %lu votes\n",A[j]);
        else if(j==3)
            printf("JDU Party got %lu votes\n",A[j]);
        else if(j==4)
            printf("RJD Party got %lu votes\n",A[j]);
        else if(j==5)
            printf("NOTA got %lu vote\n",A[j]);
        else
            printf("Other Party got %lu votes\n\n\n",A[j]);
        if(k<A[j])
        {
            k=A[j];
            l=j;
        }
    }
    if(l==0)
        printf("----------------------------------------!!!Congratulation BJP won the election!!!---------------------------------------------");
    else if(l==1)
        printf("----------------------------------------!!!Congratulation Congress won the election!!!----------------------------------------");
    else if(l==2)
        printf("----------------------------------------!!!Congratulation AAP won the election!!!----------------------------------------------");
    else if(l==3)
        printf("----------------------------------------!!!Congratulation JDU won the election!!!----------------------------------------------");
    else if(l==4)
        printf("----------------------------------------!!!Congratulation RJD won the election!!!----------------------------------------------");
    else if(l==5)
        printf("----------------------------------------!!!Congratulation No One won the election!!!-------------------------------------------");
    else if(l==6)
        printf("----------------------------------------!!!Congratulation Others won the election!!!-------------------------------------------");
    else
        printf("*******************Error******************\n");
    printf("\n\n\n");
    return 0;
}

