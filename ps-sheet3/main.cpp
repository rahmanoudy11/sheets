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



//S.Search In Matrix


//T.Matrix


//U.Is B a subsequence of A ?



//V.Frequency Array


//W.Mirror Array


//X.8 Neighbors

//Y.Range sum query

//Z.Binary Search
