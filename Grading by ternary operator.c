
#include<stdio.h>
int main()
{
printf("ENTER YOUR MARK :");
int mark=0;
scanf("%d",&mark);
printf(mark>=85 && mark<=100?"YOU SECURED GRADE A":
(mark>=70 && mark<=84?"YOU SECURED GRADE B":
(mark>=55 && mark<=69?"YOU SECURED GRADE C":
(mark>=40 && mark<=54?"YOU SECURED GRADE D":
(mark>=0 && mark<40?"YOU SECURED GRADE F":"ENTER THE VALID MARK")))));
return 0;
}
