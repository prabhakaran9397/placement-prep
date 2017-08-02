#include<iostream>
#include<cmath>
#define MIN 1
#define MAX 10000000
#define SIZE 1
using namespace std;
typedef long long int in;
bool check(in n){
  in m=n;
  int d[SIZE]={0};
  while(m!=0){
    if((m%10)>=SIZE) return 0;
    d[(m%10)]++;
    m/=10;
  }for(int i=0;i<SIZE;i++)
    m+=d[SIZE-i-1]*pow(10,i);
  if(m==n) return 1;
  return 0;
}
int main(){
  for(in i=MIN; i<MAX; i++)
    if(check(i))
      cout<<i<<endl;
}
