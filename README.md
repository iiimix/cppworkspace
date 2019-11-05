## mac编译
```
g++ factor03.cpp -o factor03 -std=c++11 -I/Users/iiimix/ide/gmpbuild/include -L/Users/iiimix/ide/gmpbuild/lib -lgmp -lgmpxx
```

## window编译
```
g++ factor04.cpp -o factor04 -std=c++11 -IC:\gmpbuild\include -LC:\gmpbuild\lib -lgmp -lgmpxx -fexec-charset=GBK
```