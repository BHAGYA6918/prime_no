#include<iostream>
using namespace std;
bool checkprime(int n);
int main()
{
int n,i;
bool flag=false;
cout << "enter a positive integer: ";
cin >> n;
for(i=2;i<=n/2;++i)
{
if(checkprime(i))
{
if (checkprime(n-1))
{cout << n <<" =" << i << "+" << n-i << endl;
flag=true;
}
}
}
if (!flag)
cout << n << "can't be expressed as sumof two prime numbers.";
return 0;
}
bool checkprime(int n)
{
int i;
bool isprime = true;
if(n==0||n==1)
{
isprime=false;
break;
}
}
}
return isprime;
