#include <stdio.h>
struct student
{
int rn;
char name[20];
char course[20];
char dept[20];
int yoj;

} s[5];

displaydata (int rn, int n)
{
for (int i = 0; i < n; i++)
}
if ((s[i].rn == r))
	{ 		printf ("%s %d %s %s %d", s[i].name, s[i].rn,
			s[i].course, s[i].dept,
			s[i].yoj);

}

displayname (int yoj, int n)
{
for (int i = 0; i < n; i++)
{
(yoj ==
s[i].yoj) ? (printf ("%s
",
s[i].
name))
: (printf ("no students who are joinig in year %d
", yoj));
}

}

int
main ()
{
int rn, yoj, n, i = 0;

printf ("Enter the no of students...
");

scanf ("%d", &n);
printf ("Enter the name , roll no.,couse, dept , year of joining....
");
for (int i = 0; i < n; i++)
{
scanf ("%s%d%s%s%d", &s[i].name, &s[i].rn, &s[i].course, &s[i].dept,
&s[i].yoj);
}

printf ("Enter the year of joining of students...
");
scanf ("%d", &yoj);
displayname (yoj, n);

printf ("Enter the roll no of students...
");
scanf ("%d", &rn);
displaydata (rn, n);


return 0;
}
