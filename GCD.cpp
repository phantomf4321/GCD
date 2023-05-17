int gcd(int a ,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
 int main()
{
    int x,y;
    x = 5;
    y = 58;
    cout<<gcd(x,y)<<endl;   // gives -4
    cout<<gcd(abs(x),abs(y))<<endl;   //gives 4
    return 0;
}
