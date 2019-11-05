// #include <iostream>
// #include <cstdlib>
// #include <math.h>
// #include <fstream>
// #include <time.h>
// #include <gmpxx.h>
// #include <gmp.h>

// using namespace std;
// int main(void)
// {
//     mpz_class a = 12345679;
//     mpz_class b = 18;
//     mpz_class c = 81;
//     mpz_class d;
//     clock_t begin = clock();
//     // for (int i = 1; i < 100; i++)
//     // {
//     //     d *= i;
//     // }
//     d = a+b;
//     cout<<d<<endl;
//     d = a*c;
//     cout<<d.get_d()<<endl;

    
//     clock_t finish = clock();
//     double costTime = (double)(finish-begin)/CLOCKS_PER_SEC;
//     // cout<<d<<endl;
//     // mpz_out_str(stdout, 10, result);

//     cout<<"\n"<<costTime<<endl;
//     return 0;
// }

// // mpz_t power(mpz_t base, int exp)
// // {
// //     mpz_t res;
// //     mpz_inits(res, NULL);
// //     mpz_pow_ui(res, base, exp);
// //     return res;
// // }

#include<iostream>
#include<gmpxx.h>
#include <vector>
using namespace std;

struct A;


int main()
{
    // A* pa = new A;
    // pa->a = 90;
    // pa->ivec.push_back(1000);

    mpz_class a;
    a = 1;
    for(int i = 0; i < 1000; i++)
        a *= 2;
    cout<<"2^1000 = "<<a<<endl;
    mpz_class b, c;
           b = -12345;
           c = "98765432100123456789";
    cout<<"b * c = "<<b * c<<endl;
    return 0;    
}

struct A{
    mpz_class a;
    vector<int> ivec;
    
};