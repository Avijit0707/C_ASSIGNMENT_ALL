int nature(int a);
int main()
{
    int a;
    printf("enter the number :");
    scanf("%d", &a);
    nature(a);
    return 0;
}
int nature(int a)
{
    if (a==0)
    {
        return 0;
    }
    printf("%d\n",a);
    nature(a - 1);
}