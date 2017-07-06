/**
 * @Author: Lin Chen
 * @Date:   2017-07-05T21:22:32+08:00
 * @Email:  chenlin2844@hotmail.com
 * @Filename: Fibonacci_series.cpp
 * @Last modified by:   Lin Chen
 * @Last modified time: 2017-07-06T09:37:04+08:00
 */
/*
斐波那契系列问题
题目1
给定整数N,返回斐波那契数列的第N项
题目2
给定整数N，代表台阶数，一次可以跨2个或者1个台阶，返回有多少种走法。
题目3
假设农场中成熟的母牛每年只会生下1头小母牛，并且永远不会死。第一年农场有1只成熟的母牛，
从第二年开始，母牛开始生小牛。每只小母牛3年后成熟又可以生小母牛。给定整数N，求出N年后牛的数量。
*/

#include <iostream>
using namespace std;

/*
返回Fibonacci数列的第N个数字，N从1开始
O(n)
*/
long long Fibonacci_k(int N){
  if(N<=2){
    return 1;
  }
  long long a = 1;
  long long b = 1;
  int i = 2;
  while(i!=N){
    b = a + b;
    a = b - a;
    i++;
  }
  return b;
}
/*
返回Fibonacci数列的第N个数字，N从1开始
[F(n),F(n-1)] = [F(n-1),F(n-1)]*|matrix|
O(log(n))
*/
long long Fibonacci_k_faster(int N){
  
}


long long  ClimbStairs(int N){
  if(N == 1){
    return 1;
  }else if (N == 2){
    return 2;
  }else{
    long long a = 1;
    long long b = 2;
    int i = 2;
    while(i!=N){
      b = a+b;
      a = b-a;
      i++;
    }
    return b;
  }
}
/*
返回N年后母牛的个数
递推公式为f(n) = f(n-1) + f(n-3)
*/
long long count_cow(int N){
  if(N <= 3){
    return N;
  }else{
    long long count_three_years_ago = 1;
    long long count_two_years_ago = 2;
    long long count_last_year = 3;
    long long count_this_year = 4;
    int i = 3;
    while(i++!=N){
      count_this_year = count_three_years_ago + count_last_year;
      count_three_years_ago = count_two_years_ago;
      count_two_years_ago = count_last_year;
      count_last_year = count_this_year;
    }
    return count_this_year;
  }

}

int main(){
  int N;
  while(cin >> N)
    cout << count_cow(N) << endl;
    //cout << Fibonacci_k(N)<<endl;
    //cout << ClimbStairs(N)<<endl;
  return 0;
}
