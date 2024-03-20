#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("Enter a & b :");
    scanf("%d%d",&a,&b);
    printf("\n 1.Sum \n 2.Difference \n 3.Product \n 4.Division");
    printf("\n Enter your choice (1-4) :");
    scanf("%d",&ch);
    switch (ch){
    case 1:
    printf("\nSum is %d", a+b);
    break;
    case 2:
    printf("\nDifference is %d", a-b);
    break;
    case 3:
    printf("\nProduct is %d", a*b);
    break;
    case 4: if(b!=0){
    printf("\nDivision is %f", float(a/b));
    break;
    }
    else{
    printf("Value of b is invalid!");
    break;
    }
    default:
    printf("\nInvalid Input!");
    }
    return 0;
    // Written by Ankit Khatry
}
