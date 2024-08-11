//A. 1 to N

#include <iostream>
using namespace std;

int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
    cout<<i<<endl;
}
    return 0;
}

//B. Even Numbers

#include <iostream>
using namespace std;

int main()
{
int n;
cin>>n;
if(n==1)
cout<<-1;
for(int i=1;i<=n;i++)
{
    if(i%2==0)
        cout<<i<<endl;
}


    return 0;
}

//C. Even, Odd, Positive and Negative

#include <iostream>
using namespace std;

int main()
{
int n,m,countt1,countt2,countt3,countt4;
countt1=0;
countt2=0;
countt3=0;
countt4=0;
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>m;

if(m%2==0)

    countt1++;

 else
    countt2++;
if(m>0)

     countt3++;
 else if(m<0)

        countt4++;


}
   cout<<"Even: "<<countt1<<endl;
   cout<<"Odd: "<<countt2<<endl;
   cout<<"Positive: "<<countt3<<endl;
   cout<<"Negative: "<<countt4<<endl;

    return 0;
}

//D. Fixed Password

#include <iostream>
using namespace std;

int main()
{
    int pass=1999;
    int x;
    cin>>x;
  do
    {

    if(x==pass)
    {
        cout<<"Correct"<<endl;
        break;
    }
    else
        cout<<"Wrong"<<endl;


    }while (cin>>x);
    return 0;
}

//E. Max
#include <iostream>
using namespace std;

int main()
{
    int max1,n,m;
    max1=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        if(max1<m)
            max1=m;
    }
    cout<<max1;
    return 0;
}

//F. Multiplication table

#include <iostream>
using namespace std;

int main()
{
    int n;

    cin>>n;
    for(int i=1;i<=12;i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}

//G. Factorial

#include <iostream>
using namespace std;

int main()
{
    int n,t;
    cin>>t;
    while(t>0)
    {
    long long fac =1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       fac*=i;
    }

    cout<<fac<<endl;
    t--;
    }
    return 0;
}

//H. One Prime
#include <iostream>
using namespace std;

int main()
{
    int t, countnot = 0;
    cin >> t;

    if (t <= 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 2; i <= t - 1; i++)
    {
        if (t % i == 0)
        {
            countnot++;
            break;
        }
    }

    if (countnot > 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}

//I. Palindrome
#include <iostream>

using namespace std;

int main()
{
 int n,t,r=0;
 cin>>n;
 t=n;
 while(n)
 {
     r=r*10+n%10;
     n=n/10;

 }
    if(t==r)
    cout <<r<<endl<<"YES"<<endl;
    else
      cout <<r<<endl<<"NO"<<endl;

    return 0;
}

//J. Primes from 1 to n

#include <iostream>
using namespace std;

int main()
{
    int t,countt;
    cin>>t;
    for(int i=2;i<=t;i++)
    {  countt=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
            countt=1;
            break;
            }
        }

        if(countt==0)
            cout<<i<<" ";
    }

    return 0;
}

//K. Divisors

#include <iostream>
using namespace std;

int main()
{
    int t,countt;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        if(t%i==0)
            cout<<i<<endl;
    }

    return 0;
}

//L. GCD

#include <iostream>
using namespace std;

int main()
{
    int t1,t2,y;
    cin>>t1>>t2;
   int x =min(t1,t2);

    for(int i=1;i<=x;i++)
    {
        if(t1%i==0&&t2%i==0)
          y=i;

    }
    cout<<y;

    return 0;
}

//M. Lucky Numbers
#include <iostream>
using namespace std;

int main()
{
   int x,y,c=-1;
   cin>>x>>y;
   for(int i=x;i<=y;i++)
   {
       int l=0;
       int z=i;
        while (z)
        {
            if(z%10!= 4 && z%10!=7)
                l++;
                z=z/10;
        }
        if(l==0)
        {
          cout<<i<<" ";
          c++;
        }

   }
   if(c==-1)
            cout<<-1<<endl;

    return 0;
}

//N. Numbers Histogram

#include <iostream>
using namespace std;

int main()
{ int x;
  char c;
  cin>>c>>x;
  for(int i=0;i<x;i++)
  {
      int y;
      cin>>y;
      if(c=='+')
      {
          for(int i=1;i<=y;i++)
          {
              cout<<'+';
          }
         cout<<endl;
      }
      else if(c=='-')
      {
          for(int i=1;i<=y;i++)
          {
              cout<<'-';

          }
         cout<<endl;
      }
      else if(c=='*')
      {
          for(int i=1;i<=y;i++)
          {
              cout<<'*';
          }
          cout<<endl;
      }

        else if(c=='/')
      {
          for(int i=1;i<=y;i++)
          {
              cout<<'/';
          }
        cout<<endl;
      }
  }

    return 0;
}

//O. Pyramid
#include <iostream>
using namespace std;

int main()
{ int x;
 cin>>x;
 for(int i=1;i<=x;i++)
 {

    for(int j=1;j<=i;j++)

    {

        cout<<'*';
    }
    cout<<endl;
 }
    return 0;
}

//P. Shape1

#include <iostream>
using namespace std;

int main()
{ int x;
 cin>>x;
 for(int i=x;i>=1;i--)
 {

    for(int j=1;j<=i;j++)

    {

        cout<<'*';
    }
    cout<<endl;
 }
    return 0;
}

//Q. Digits
#include <iostream>
using namespace std;

int main()
{ int x;
 cin>>x;
while(x--)
 {
         int y;
         cin>>y;
         if(y==0)
            cout <<0<<" ";
         else
          {
         while(y)
           {
                 cout <<y%10<<" ";
                 y=y/10;

           }
          }
    cout<<endl;
 }
    return 0;
}

//R. Sequence of Numbers and Sum

#include <iostream>
using namespace std;

int main()

{
     int n ,m;
     while(cin>>n>>m&&n>0&&m>0)
{
  long long  sum=0;
  if(n>m)
   swap(n,m);


 for(int i=n;i<=m;i++)
 {
     cout<<i<<" " ;

     sum=sum+i;

 }
 cout<<"sum ="<<sum<<endl;
 }

    return 0;
}

//S. Sum of Consecutive Odd Numbers
#include <iostream>
using namespace std;

int main()

{
     int v;
     cin>>v;
for(int i=0;i<v;i++)
{

    int n ,m,e;
    cin>>n>>m;
    long long sum=0;


  if(n>m)
   swap(n,m);


 for(int i=n+1;i<m;i++)
 {
    if(i%2==0)
       e++;
    else
     sum=sum+i;
 }


 cout<<sum<<endl;

}
    return 0;
}

//T. Shape2

#include <iostream>
using namespace std;

int main()
{ int x;
 cin>>x;
 int k=1;
 int a=x-1;
 for(int i=1;i<=x;i++)
 {
  for (int t=a;t>0;t--)
  {
      cout<<" ";
  }
  a--;
 for(int j=1;j<=k;j++)

    {

        cout<<'*';
    }
    k+=2;
    cout<<endl;
 }
    return 0;
}

//U. Some Sums

#include <iostream>
using namespace std;

int main()
{ int n ,a ,b;
cin >>n >>a>>b;
int tsum=0;
for(int i=1;i<=n;i++)
{
    int sum=0;
    int n=i;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    if(sum>=a&&sum<=b)
    {
        tsum+=i;
    }
}
cout <<tsum ;
    return 0;
}

//V. PUM

#include <iostream>
using namespace std;

int main()
{  short n;
    int c=0 ,i=1;
    cin >>n ;
while (true )
{
    if (c==n)
    {
        break;
    }
    if (i%4==0)
    {

        cout<<"PUM"<<endl;
        i++;
        c++;
        continue;
    }
    cout<<i<<" ";
    i++;
}
    return 0;
}

//W. Shape3
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >>x;
    int s=x-1;
    int k=1;
    for(int i=1;i<=x;i++)
    {
        for(int j=s;j>0;j--)
        {

            cout<<" ";
        }
        s--;
        for(int t=1;t<=k;t++)
        {
           cout<<"*";
        }
        k+=2;
        cout<<endl;
    }
      k-=2;
      s=1;

    for(int i=1;i<=x;i++)
    {
        for(int t=1;t<s;t++)
    {
        cout<<" ";
    }
    s++;
        for(int j=k;j>0;j--)
        {
            cout<<"*";
        }
        k-=2;
        cout<<endl;
    }

   return 0;
}

//X.Convert To Decimal 2
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   long long num;
   int ones;
   for(int i=0;i<n;i++)
   {
       cin>>num;
        ones=0;
       while(num>0)
       {
           if(num%2==1)
            ones++;
            
          num/=2;
       }
     long long sum=0;
     for(int j=0;j<ones;j++)
     {
         sum+=1*pow(2,j);
     }
       cout<<sum<<endl;
 
   }
 
    return 0;
}

//Y.Easy Fibonacci

#include <iostream>
using namespace std;

int main()
{
int x,f=0,s=1;
cin >>x;
if(x==1||x==0)
    cout<<0;
else{
cout<<f<<" "<<s<<" ";
for(int i=2;i<x;i++)
{
   int z=f+s;
   cout<<z<<" ";
   f=s;
   s=z;
}}
   return 0;
}

//Z.Three Numbers
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,c=0;
   cin>>n>>m;
   for(int i=0;i<=n;i++)
   {
       for(int j=0;j<=n;j++)
       {
           if(m-i-j>=0&&m-i-j<=n)
            c++;
           
       }
   }
   cout<<c<<endl;

    return 0;
}
