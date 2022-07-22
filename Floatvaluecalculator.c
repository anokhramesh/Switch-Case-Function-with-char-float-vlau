// FLOAT VALUE CALCULATOR
#include <stdio.h>
#include <stdlib.h>
#include  <conio.h>
int main(void)
{
   float Firstnum,Secondnum,Answer;
   char opr,option;
   do
        {
        
        printf(" Choose an Arithmetical Operator(+,-,*,/)\n");
        scanf("%s",&opr);
        printf("\n Enter First Number\n");
        scanf("%f",&Firstnum);
        printf("\n Enter Secondnum Number\n");
        scanf("%f",&Secondnum);
        switch (opr)
        {
            case'+':Answer = Firstnum+Secondnum;// if operator is +
            printf("\n Result is %.3f + %.3f = %.3f\n",Firstnum,Secondnum,Answer);break;


            case'-':Answer = Firstnum-Secondnum;// if operator is -
            printf("\n Result is %.3f - %.3f = %.3f\n",Firstnum,Secondnum,Answer);break;


            case'*':Answer = Firstnum*Secondnum;// if operator is *
            printf("\n Result is %.3f * %.3f = %.3f\n",Firstnum,Secondnum,Answer);break;


            case'/':Answer = Firstnum/Secondnum;// if operator is /
            printf("\n Result is %.3f / %.3f = %.3f\n",Firstnum,Secondnum,Answer);break;

            default: printf("Invalid Operator\n");break;
        }
printf("\n Press 'y' to continue\n");
    option = getch();

        }
    while (option=='y');
    getch();

    return 0;
}
