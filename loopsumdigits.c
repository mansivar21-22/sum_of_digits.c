 #include<stdio.h>
 int main()
 {

  int n,last_num,sum = 0,temp;
    scanf("%d", &n);
    temp = n;
 
    while(temp > 0)
    {
        last_num = temp %10;
        sum = sum + last_num;
        temp = temp/10;
    }
    printf("%d",sum);
    return 0;
}
