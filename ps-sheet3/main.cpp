//A. Summation
#include <iostream>
using namespace std;

int main()
{
    int size;
    long long sum ,x;
    sum=0;
    cin>>size;
    int arr[size];
    for(int i=1;i<=size;i++)
     {
      cin>>x;
       sum+=x;
     }

    cout<<abs(sum)<<endl;

   return 0;
}

//B. Searching
#include <iostream>
using namespace std;

int main()
{
    int size;
    long long x,m;
    bool f=0;
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++)
     {
      cin>>x;
      arr[i]=x;
     }


     cin>>m;
     for(int j=0;j<size ;j++)
 {

      if(m==arr[j])
      {
        cout<<j;
        f=1;
        break;
      }


 }

 if(f==0)
    cout<<-1;

   return 0;
}

//C. Replacement
#include <iostream>
using namespace std;

int main()
{
    int size;
    int x;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
      cin>>x;
      arr[i]=x;

    }

     for(int j=0;j<size ;j++)
    {

      if(arr[j]<0)
        cout<<2<<" ";

      else if(arr[j]>0)
        cout<<1<<" ";

      else
        cout<<0<<" ";

    }

   return 0;
}

//D. Positions in array

#include <iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++)
     {
      cin>>arr[i];
      if(arr[i]<=10)
        cout<<"A["<<i<<"] = "<<arr[i]<<endl;
     }

   return 0;
}

//E. Lowest Number

#include <iostream>
using namespace std;

int main()
{
    int size,minn;
    bool f=0;
    cin>>size;
    int arr[size+1];

    for(int i=1;i<=size;i++)
     {
      cin>>arr[i];

     }
     minn =arr[1];
     int pos=1;
     for(int j=1;j<=size;j++)
     {
          if(arr[j]<minn)
          {
             minn =arr[j];
             pos=j;
          }

     }
 cout<<minn<<" "<<pos;
   return 0;
}

//F. Reversing

#include <iostream>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++)
     {
      cin>>arr[i];

     }

     for(int j=size-1;j>=0;j--)
     {
          cout<<arr[j]<<" ";

     }
   return 0;
}

//G. Palindrome Array

#include <iostream>
using namespace std;

int main()
{
int size;
cin>>size;
bool f=0;
int arr[size];
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}

for(int j=0,i=size-1;j<size&&i>=0;j++,i--)
{
    if(arr[j]!=arr[i])
    {
         f=1;
         break;
    }

}
if(f==0)
    cout<<"YES";
else
    cout<<"NO";
   return 0;
}
  //H. Sorting


#include <iostream>
using namespace std;

int main()
{
int size;
cin>>size;
int arr[size];
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
for(int j=0;j<size;j++)
{  for(int i=0;i<size -1;i++)
{
    if(arr[i]>arr[i+1])
    {
        int t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;
    }
}
}
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}

  return 0;
}

//I. Smallest Pair

#include <iostream>
using namespace std;

int main()
{
int x;
cin>>x;

while(x--)
{
int size;
int mini=INT_MAX;
cin>>size;
int arr[size+1];

for(int i=1;i<=size;i++)
{

    cin>>arr[i];
}

for(int i=1;i<=size;i++)
{

    for(int j=i+1;j<=size;j++)
   {
    mini=min(mini,(arr[i]+arr[j]+j-i));
   }

}
cout<<mini<<endl;
}
  return 0;
}

//J. Lucky Array

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int size;
cin>>size;
int arr[size];
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
sort(arr,arr+size);
int mini=arr[0];
int countt=0;
for(int i=0;i<size;i++)
{
    if(arr[i]==mini)
        countt++;
}
if(countt%2==0)
    cout<<"Unlucky"<<endl;
else
    cout<<"Lucky"<<endl;

  return 0;
}

//K. Sum Digits

#include <iostream>
using namespace std;

int main()
{
int n;
cin>>n;
string s;
cin>>s;
int sum =0;

for(int i=0;i<n;i++)
{
    sum+=(int)(s[i]-'0');
}
cout<<sum;
  return 0;
}

//L. Max Subarray

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    while(x--)
 {
    int size;
    cin >>size;
    int arr[size];

    for(int i=0;i<size;i++)
     {
        cin>>arr[i];
     }


    for(int i=0;i<size;i++)
     {
        cout<<arr[i]<<" ";
     }


    for(int i=0;i<size;i++)
     {
       int maxi=arr[i];
       for(int j=i+1;j<size;j++)
        {
        maxi=max(maxi,arr[j]);
        cout<<maxi<<" ";
        }
     }
    cout<<endl;
}

    return 0;
}

//M. Replace MinMax
#include <iostream>
using namespace std;

int main()
{

    int size,maxx=INT_MIN,mini=INT_MAX,posm,posmi;
    cin >>size;
    int arr[size];

    for(int i=0;i<size;i++)
     {
        cin>>arr[i];

        maxx=max(maxx,arr[i]);
        mini=min(mini,arr[i]);
     }
     for(int i=0;i<size;i++)
     {
         if(arr[i]==maxx)
           posm=i;
         else if(arr[i]==mini)
            posmi=i;
     }
     int temp=arr[posm];
     arr[posm]=arr[posmi];
     arr[posmi]=temp;

 for(int i=0;i<size;i++)
 {
     cout<<arr[i]<<" ";
 }
    return 0;
}

//N. Check Code

#include <iostream>
using namespace std;

int main()
{

    int a,b;
    string s;
    cin >>a>>b;
    cin>>s;
    if(s[a]!='-')
    {
        cout<<"No";
        return 0;
    }
     int len=s.length();
     bool ch=0;
    for(int i=0;i<len;i++)
     {

         if((s[i]<'0'||s[i]>'9')&&i!=a)
            ch=1;
     }
     if(ch==0)
        cout<<"Yes";
     else
        cout<<"No";
    return 0;
}

//O. Fibonacci

#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >>a;
    long long  arr[51];
    arr[1]=0;
    arr[2]=1;
   for(int i=3;i<51;i++)
   {
       arr[i]=arr[i-1]+arr[i-2];
   }
   cout<<arr[a]<<endl;
    return 0;
}

//P. Minimize Number

#include <iostream>
using namespace std;

int main()
{

    int a,countt=0,mini=INT_MAX;
    cin >>a;
    int arr[a];
   for(int i=0;i<a;i++)
   {  cin>>arr[i];
   }

   for(int i=0;i<a;i++)
   {    countt=0;
       while(arr[i]%2==0)
        {
            countt++;
            arr[i]=arr[i]/2;
        }
       mini =min(countt,mini);
   }
cout<<mini;
    return 0;
}

//Q.Count Subarrays
 #include <iostream>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
int countt=0;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=0;i<n;i++)
{
    countt++;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]>=arr[j-1])
            countt++;
        else
            break;
    }
}
cout<<countt<<endl;
}
    return 0;
}




//R.Permutation with arrays

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int size;
   cin>>size;
   int a[size],b[size];

   for(int i=0;i<size;i++)
   {
       cin>>a[i];
   }
   for(int i=0;i<size;i++)
   {
     cin>>b[i] ;
   }
   sort(a,a+size);
   sort(b,b+size);
   for(int i=0;i<size;i++)
   {
       if(a[i]!=b[i])
       {
           cout<<"no";
           return 0;
       }
   }
   cout<<"yes";
    return 0;
}

//S.Search In Matrix

#include <iostream>

using namespace std;

int main()
{
   short n,m;
   cin>>n>>m;
   int a[n][m];

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin>>a[i][j];
       }
   }
   int x;
   cin>>x;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
          if(a[i][j]==x)
          {
              cout<<"will not take number";
              return 0;
          }

       }
   }
   cout<<"will take number";

    return 0;
}
//T.Matrix
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   short n;
   cin>>n;
   int a[n][n];

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>a[i][j];
       }
   }
   int sum1=0;
  for(int i=0,j=0;i<n;i++,j++)
   {
            sum1+=a[i][j];
    }

 int sum2=0;
 for( int i=0,j=n-1;i<n;i++,j--)
 {

        sum2+=a[i][j];

 }


  cout<<abs(sum1-sum2)<<endl;
    return 0;
}

//U.Is B a subsequence of A ?
#include <iostream>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   int countt=0;
   int a[n],j=0;

   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }


  for(int i=0;i<m;i++)
  {
    int x;
    cin>>x;
    for( ;j<n;j++)

        if(x==a[j])
        {
            countt++;
            j++;
            break;
        }

  }

  if(countt==m)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
    return 0;
}


//V.Frequency Array

#include <iostream>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   int a[n];

   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }

  int farr[m+1]= {};
  for(int i=0;i<n;i++)
  {
    farr[a[i]]++;
  }

for(int i=1;i<=m;i++)
  {
    cout<<farr[i]<<endl;
  }
    return 0;
}
//W.Mirror Array
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   int a[n][m];

   for(int i=0;i<n;i++)
   {
         for(int j=0;j<m;j++)
        {
         cin>>a[i][j];
         }
   }

     for(int i=0;i<n;i++)
   {
         for(int j=0,k=m-1;j<m/2;j++,k--)
        {
         swap(a[i][j],a[i][k]);
         }
   }
     for(int i=0;i<n;i++)
   {
         for(int j=0;j<m;j++)
        {
         cout<<a[i][j]<<" ";
         }
         cout<<endl;
   }

    return 0;
}

//X.8 Neighbors
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   char a[101][101];

   for(int i=1;i<=n;i++)
   {
         for(int j=1;j<=m;j++)
        {
         cin>>a[i][j];
         }
   }
    int x,y;
    cin>>x>>y;

    if(a[x][y-1]!='.'&&
       a[x][y+1]!='.'&&
       a[x-1][y]!='.'&&
       a[x+1][y]!='.'&&
       a[x-1][y-1]!='.'&&
       a[x-1][y+1]!='.'&&
       a[x+1][y+1]!='.'&&
       a[x+1][y-1]!='.')

        cout<<"yes"<<endl;


    else
        cout<<"no"<<endl;
    return 0;
}
//Y.Range sum query
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long  n,m;
   cin>>n>>m;
   long long  a1[n];
   long long  a2[n];
   for(int i=0;i<n;i++)
   {
         cin>>a1[i]; 
         if(a1[i]==0)
         {
             a2[i]=a1[i];
         }
         else 
         {
            a2[i]=a1[i]+a2[i-1];

         }
       
   }
   
    while(m--)
    {
      
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        long long  sum=a2[y]-a2[x]+a1[x];
        cout<<sum<<endl;
    }
    return 0;
}
//Z.Binary Search
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int left,int right,int searchh)
{
    while(left<=right)
    {
        int mid=left +(right-left )/2;
        if(arr[mid]==searchh)
            return mid;
        else if (arr[mid]<searchh)
        {
          left =mid+1;  
        }
        else
        {
           right=mid-1; 
        }
    }
    return -1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    while(m--)
    {
        int s;
        cin>>s;
        int result =binarysearch(arr,0,n-1,s);
        if(result==-1)
        cout <<"not found"<<endl;
        else 
            cout<<"found"<<endl;
    }

    return 0;
}
