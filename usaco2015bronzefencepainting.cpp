#include <iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main() {
freopen("paint.in", "r", stdin);
freopen("paint.out", "w", stdout);
int a,b,c,d,v1;
cin>>a>>b;
cin>>c>>d;
if(c<a)
{
 swap(d,b);
 v1=(b-a) +(d-c);
if(b>c)
 v1=v1-(b-c);
if(b>d)
 v1=v1+(b-d);
}
else{
v1=(b-a) +(d-c);
if(b>c)
 v1=v1-(b-c);
if(b>d)
 v1=v1+(b-d);
}
cout<<v1;

}