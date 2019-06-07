# include <stdio.h>
int main()
{
    int n, a = 0, r, b;

    printf(" ");
    scanf("%d", &n);
   b = n;
  while( n!=0 )
    {
        r = n%10;
        a = a*10 + r;
        n /= 10;
    }
    if (b==a)
        printf("yes",b);
    else
        printf("no", b);
    
    return 0;
}
