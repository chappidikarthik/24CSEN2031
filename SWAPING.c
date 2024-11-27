#####BY THREE NUMBERS#########
// Online C compiler to run C program online
#include <stdio.h>

int main()
{
 int a=4,b=2, c=6, temparory;
 printf("\n before sorting;a=%d,b=%d,c=%d",a,b,c);
 if (a>b){// swap the numbers
 temparory=a; a=b; b=temparory; }
 if(b>c){// swap the numbers
 temparory=b; b=c; c=temparory;
}
printf("\n after sorting;a=%d,b=%d,c=%d",a,b,c);
return 0;
}
==========output=========
before sorting;a=4,b=2,c=6
 after sorting;a=2,b=4,c=6

=== Code Execution Successful ===



########BY FOUR NUMBERS###################
// Online C compiler to run C program online
#include <stdio.h>

int main()
{
 int a=4,b=2, c=6, d=5,temparory;
 printf("\n before sorting;a=%d,b=%d,c=%d,d=%d",a,b,c,d);
 if (a>b){// swap the numbers
 temparory=a; a=b; b=temparory; }
 if(b>c){// swap the numbers
 temparory=b; b=c; c=temparory;
}
if (c>d){// swap the numbers
temparory=c; c=d; d=temparory;
printf("\n after sorting;a=%d,b=%d,c=%d,d=%d",a,b,c,d);
}
return 0;
}
==========output========
 before sorting;a=4,b=2,c=6,d=5
 after sorting;a=2,b=4,c=5,d=6

=== Code Execution Successful ===
