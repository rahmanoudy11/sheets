//A. Say Hello With C++
#include <iostream>

using namespace std;

int main()
{
    string S;
    cin>>S;

    cout << "Hello, "+S << endl;
    return 0;
}

//B. Basic Data Types
#include <iostream>

using namespace std;

int main()
{
    int i;
    long long l;
    char ch;
    float f;
    double d;

   cin>>i>>l>>ch>>f>>d;
   cout <<i<<endl<<l<<endl<<ch<<endl<<f<<endl<<d<<endl;
    return 0;
}

//C. Simple Calculator

#include <iostream>

using namespace std;

int main()
{
   long long X , Y;
   cin>>X>>Y;
   cout<<X<<" + "<<Y<<" = "<<X+Y<<endl;
   cout<<X<<" * "<<Y<<" = "<<X*Y<<endl;
   cout<<X<<" - "<<Y<<" = "<<X-Y<<endl;
    return 0;
}

//D. Difference

#include <iostream>

using namespace std;

int main()
{
   long long a,b,c,d;

   cin>>a>>b>>c>>d;
   cout <<"Difference = "<< (a*b)-(c*d);

    return 0;
}

//E. Area of a Circle
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
   double R;

   cin>>R;
   cout<< fixed << setprecision(9) <<3.141592653*R*R ;

    return 0;
}

//F. Digits Summation

#include <iostream>
using namespace std;

int main()
{
   long long n,m;

   cin>>n>>m;
   int lastn = n%10;
   int lastm =m%10;
   cout<< lastn+lastm <<endl;

    return 0;
}
 
//G. Summation from 1 to N

#include <iostream>
using namespace std;

int main()
{
   long long n;

   cin>>n;
   cout<<n*(n+1)/2;

    return 0;
}

//H. Two numbers

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   float a,b;

   cin>>a>>b;
   cout<<"floor "<<a<<" / "<<b<<" = "<< floor(a/b)<<endl;
   cout<<"ceil "<<a<<" / "<<b<<" = "<< ceil(a/b)<<endl;
   cout<<"round "<<a<<" / "<<b<<" = "<< llround(a/b)<<endl;
    return 0;
}

//I. Welcome for you with Conditions

#include <iostream>

using namespace std;

int main()
{
   float a,b;

   cin>>a>>b;
   if (a>=b)
    cout<<"Yes"<<endl;
   else
    cout<<"No"<<endl;
    return 0;
}
 

//J. Multiples

#include <iostream>

using namespace std;

int main()
{
   int a,b;

   cin>>a>>b;
   if (a%b==0||b%a==0)
    cout<<"Multiples"<<endl;
   else
    cout<<"No Multiples"<<endl;
    return 0;
}
//K. Max and Min
#include <iostream>

using namespace std;

int main()
{
   int a,b,c;

   cin>>a>>b>>c;

   if (a<=b&&a<=c&&b>=a&&b>=c)
    cout<<a<<" "<<b;
   else if (a<=b&&a<=c&&c>=a&&c>=b)
    cout<<a<<" "<<c;
   else if (b<=a&&b<=c&&a>=b&&a>=c)
    cout<<b<<" "<<a;
    else if (b<=a&&b<=c&&c>=a&&c>=b)
    cout<<b<<" "<<c;
   else if (c<=a&&c<=b&&a>=b&&a>=c)
    cout<<c<<" "<<a;
   else if (c<=a&&c<=b&&b>=a&&b>=c)
    cout<<c<<" "<<b;

    return 0;

}
//L. The Brothers

#include <iostream>

using namespace std;

int main()
{
    string f1,s1;
    string f2,s2;
    cin>>f1>>s1>>f2>>s2;
    if(s1==s2)
        cout<<"ARE Brothers"<<endl;
    else
        cout<<"NOT"<<endl;

    return 0;

}

//L. The Brothers
#include <iostream>

using namespace std;

int main()
{
    string f1,s1;
    string f2,s2;
    cin>>f1>>s1>>f2>>s2;
    if(s1==s2)
        cout<<"ARE Brothers"<<endl;
    else
        cout<<"NOT"<<endl;

    return 0;

}

//M. Capital or Small or Digit

#include <iostream>

using namespace std;

int main()
{
    char x;
    cin>>x;

  if(x>='0'&&x<='9')
    cout <<"IS DIGIT";
  else
  {
      if (x>='a'&&x<='z')
        cout<<"ALPHA"<<endl<<"IS SMALL";
      else
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
  }
    return 0;

}

//N. Char

#include <iostream>

using namespace std;

int main()
{
    char x;
    cin>>x;
    if (x>='a'&&x<='z')
       x = x-32;
     else
       x=x+32;

    cout<<x;

    return 0;

}

//O. Calculator
#include <iostream>

using namespace std;

int main()
{
  int a,b;
  char  c;
  cin>>a>>c>>b;
  if (c=='+')
  cout<<a+b;
  else if (c=='-')
    cout<<a-b;
  else if (c=='*')
    cout<<a*b;
  else if (c=='/')
    cout <<a/b;

    return 0;

}

//P. First digit !

#include <iostream>

using namespace std;

int main()
{
  int a;
  cin>>a;
  int x=a/1000;
  if(x%2==0)
    cout<<"EVEN"<<endl;
  else
    cout <<"ODD"<<endl;

    return 0;

}
 

//Q. Coordinates of a Point

#include <iostream>

using namespace std;

int main()
{
  double  x,y;
  cin>>x>>y;

  if(x>0&&y>0)
    cout<<"Q1"<<endl;

  else if(x<0&&y>0)
    cout<<"Q2"<<endl;

  else if(x<0&&y<0)
    cout<<"Q3"<<endl;

  else if (x>0&&y<0)
    cout<<"Q4"<<endl;
  else if (x==0&&y==0)
    cout<<"Origem"<<endl;
  else if (x==0&&(y>0||y<0))
    cout<<"Eixo Y"<<endl;
    else if (y==0&&(x>0||x<0))
    cout<<"Eixo X"<<endl;


    return 0;

}

//R. Age in Days

#include <iostream>

using namespace std;

int main()
{
  int x;
  cin>> x;
  int y,m,d;
  y=x/365;
  m=x%365/30;
  d=x%365%30;
  cout <<y<<" years"<<endl;
  cout <<m<<" months"<<endl;
  cout <<d<<" days"<<endl;
    return 0;

}

//S. Interval

#include <iostream>

using namespace std;

int main()
{
  double x;
  cin>> x;
 if (x>=0&&x<=25)
    cout <<"Interval [0,25]"<<endl;
 else if (x>25&&x<=50)
    cout <<"Interval (25,50]"<<endl;
 else if (x>50&&x<=75)
    cout <<"Interval (50,75]"<<endl;
 else if (x>75&&x<=100)
    cout <<"Interval (75,100]"<<endl;
 else
    cout<<"Out of Intervals"<<endl;
    return 0;

}

//T. Sort Numbers

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int max1,min1,def;
    if(a>=b&&a>=c)
    {
        max1=a;
        if(b>=c)
        {
            def=b;
            min1=c;
        }
        else
        {
            def=c;
            min1=b;
        }
    }
   else if(b>=a&&b>=c)
    {
        max1=b;
        if(a>=c)
        {
            def=a;
            min1=c;
        }
        else
        {
            def=c;
            min1=a;
        }
    }
    else  if(c>=b&&c>=a)
    {

        max1=c;
        if(b>=a)
        {
            def=b;
            min1=a;
        }
        else
        {
            def=a;
            min1=b;
        }
    }

    cout<<min1<<endl<<def<<endl<<max1<<endl;
    cout <<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}

//U. Float or int

#include <iostream>

using namespace std;

int main()
{
 float x;
 cin>>x;
 int y=x;
 float decimal = x-y;
 if (decimal==0)
    cout<<"int "<<y <<endl;
    else
    cout <<"float "<<y <<" "<<decimal<<endl;
    return 0;

}

//V. Comparison

#include <iostream>

using namespace std;

int main()
{
 int a,b;
 char s;
 cin >>a>>s>>b;
 if (s=='<'&&a<b)
   cout <<"Right"<<endl;
 else if (s=='>'&&a>b)
    cout <<"Right"<<endl;
 else if (s=='='&&a==b)
    cout <<"Right"<<endl;
 else
    cout <<"Wrong"<<endl;
    return 0;

}

//W. Mathematical Expression

#include <iostream>

using namespace std;

int main()
{long long  a,b,c;
char s,q;
cin>>a>>s>>b>>q>>c;
 switch (s){
   case '+':
      if (a+b==c)
        cout <<"Yes";
      else
        cout <<a+b;
      break;
    case '-':
      if (a-b==c)
        cout <<"Yes";
      else
        cout <<a-b;
      break;
    case '*':
      if (a*b==c)
        cout <<"Yes";
      else
        cout <<a*b;
      break;
 }
    return 0;

}

//X. Two intervals

#include <iostream>
using namespace std;

int main()
{
    int l1,r1,l2,r2,l,r;
    cin>>l1>>r1>>l2>>r2;
  if(max(l1,l2)>min(r1,r2))
    cout<<-1;
  else
    cout<<max(l1,l2)<<" "<<min(r1,r2);

    return 0;
}

//Y. The last 2 digits

#include <iostream>

using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long  thelasttwodigits=(a%100*b%100*c%100*d%100)%100;

    if (thelasttwodigits<10)
        cout<<0<<thelasttwodigits<<endl;
    else
        cout <<thelasttwodigits<<endl;

    return 0;
}

//Z. Hard Compare

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    long  double a,b,c,d;
    cin>>a>>b>>c>>d;
    d=d/1e12;
    b=b/1e12;
    if (pow(a,b)> pow(c,d))
        cout <<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
