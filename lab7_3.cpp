#include<iostream>
#include<cmath>

using namespace std;
int adiff(int a, int b){
  int circle =360;
  int ans;
  int roundcount_a =a/circle;
  int true_a =a-(circle*roundcount_a);
  int roundcount_b = b/circle;
  int true_b =b-(circle*roundcount_b);
  if(true_a>true_b){
    ans=true_a-true_b;
    if(ans>180){
      ans=360-ans;
    }
  }
  else{
    ans=true_b-true_a;
    if(ans>180){
      ans=360-ans;
    }
  }
  return ans;
}

int main(){
  cout << adiff(180,270)<<"\n";
  cout << adiff(210,45)<<"\n";
  cout << adiff(0,360)<<"\n";
  cout << adiff(10,350)<<"\n";
  cout << adiff(95,260)<<"\n";
  cout << adiff(90,-90)<<"\n";
  cout << adiff(1000,280)<<"\n";
  cout << adiff(60,244);
}
