/**
 * @Author: Lin Chen
 * @Date:   2017-07-05T21:22:32+08:00
 * @Email:  chenlin2844@hotmail.com
 * @Filename: Fibonacci_series.cpp
 * @Last modified by:   Lin Chen
 * @Last modified time: 2017-07-05T21:45:59+08:00
 */
/*
斐波那契系列问题
题目1
给定整数N,返回斐波那契数列的第N项
*/

#include <iostream>
using namespace std;

/*
返回Fibonacci数列的第N个数字，N从1开始
*/
int Fibonacci_k(int N){
  if(N<=2){
    return 1;
  }
  int a = 1;
  int b = 1;
  int i = 2;
  while(i!=N){
    b = a + b;
    a = b - a;
    i++;
  }
  return b;
}



int main(){
  int N;
  while(cin >> N)
    cout << Fibonacci_k(N)<<endl;
  return 0;
}
