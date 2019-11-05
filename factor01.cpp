#include<iostream>
#include <fstream>
#include<gmpxx.h>
#include <vector>
#include <time.h>
using namespace std;

struct A;

int main()
{
    mpz_class res = 1;
    clock_t begin = clock();
    for (int i = 1; i < 500000; i++)
    {
        res *= i;
    }
    clock_t finish = clock();
    double costTime = (double)(finish-begin)/CLOCKS_PER_SEC;
    // cout<<res<<endl;
    // 50w耗时14.65s
    cout<<"\n耗时："<<costTime<<endl;
    return 0;
}


struct A{
    int power;
    vector<int> TList;
    mpz_class FTail;
};