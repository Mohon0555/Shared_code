#include<stdio.h>
#include<string.h>

struct Student
{
    char Name[20];
    int ID;
    int Marks;
    char mname[50];
};

int main()
{
    int n;
    printf("How Many Students List You Want to Record: ");
    scanf("%d", &n);

    int i;
    struct Student S[n];
    int max=S[1].Marks;
    char mname;
    //mname=S[1].Name;
    printf("\n");

    for(i=1; i<=n; i++)
    {
        printf("Enter Name-%d:",i);
        scanf("%s", &S[i].Name);
        printf("Enter ID-%d:", i);
        scanf("%d", &S[i].ID);
        printf("Enter Marks-%d:", i);
        scanf("%d", &S[i].Marks);
        printf("\n");
    }

    for(i=1; i<=n; i++)
    {
        printf("Student Name-%d: %s \n", i,S[i].Name);
        printf("Student ID-%d: %d \n", i,S[i].ID);
        printf("Student Marks-%d: %d \n", i,S[i].Marks);
        printf("\n");
    }
    for(i=1; i<=n; i++)
    {
        if(S[i].Marks > max)
        {
           // max= S[i].Marks;
            mname= S[i].Name;
        }
    }

    int min=S[1].Marks;
    for(i=1; i<=n; i++)
    {
        if(S[i].Marks < min)
        {
            min=S[i].Marks;
        }
    }

    int x,found;
    char SNeam[50];
    scanf("%s", &SNeam);

    for(x=1; x<=n; x++)
    {
        if(strcmp(S[x].Name, SNeam) == 0)
        {
            printf("%s \n", S[x].Name);
            printf("%d \n", S[x].ID);
            printf("%d \n", S[x].Marks);
            break;
        }
        else
        {
            printf("Bhagen mile nai kisu");
        }
    }

    printf("Max name is: %s \n", mname);
    printf("Min is %d \n", min);

    return 0;
}
