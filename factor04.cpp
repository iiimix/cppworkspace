#include<gmpxx.h>
#include<iostream>
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
    int n;
    mpz_t res;
    while(1) {
        cout<<"请输入整数："<<endl;
        cin>>n;
        clock_t begin = clock();
        mpz_fac_ui(res, n);

        clock_t finish = clock();
        double costTime = (double)(finish-begin)/CLOCKS_PER_SEC;
        // 50w耗时5s;
        // cout<<"阶乘结果："<<res<<endl;
        ofstream fout("factor04_"+to_string(n)+".txt");
        fout <<res;                     //将变量的值写入文件
        fout.close();                   //关闭文件
        cout<<n<<"的阶乘耗时："<<costTime<<"s"<<endl;
    }
    return 0;
}