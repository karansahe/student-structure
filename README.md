# student-structure
structure
#include <stdio.h>
#define n 5
struct student
{
int rn;
char name[10];
char dept[6];
char course[15];
int yoj;

} s[n];

void displaydata (int r)
{
for (int i = 0; i < n; i++)
{
if ((s[i].rn == r))
{
    printf ("%d %s %s %s %d", s[i].rn, s[i].name,s[i].dept, s[i].course,s[i].yoj);
}

}

}

void displayname (int y)
{
for (int i = 0; i < n; i++)
{
if (s[i].yoj==y)
{
    printf("%s\n",s[i].name);
}


}

}

int main(){
    int y,r;
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n\n", i+1);

        printf("Enter Roll no:\n");
        scanf("%d", &s[i].rn);
        printf("Enter name:\n");
        scanf("%s", s[i].name);
        printf("Enter department:\n");
        scanf("%s", s[i].dept);
        printf("Enter course:\n");
        scanf("%s", s[i].course);
        printf("Enter year of joining:\n");
        scanf("%d", &s[i].yoj);
    }
    printf("Enter year:\n");
    scanf("%d", y);
    displayname(y);

    printf("Enter Roll no:\n");
    scanf("%d", r);
    displaydata(r);



    
}
