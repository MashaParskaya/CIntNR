#include "autotest.hpp"

void test1(){
  int a[len];
  int b[len];
  for (int i = 0; i < len; i++){
    a[i] = 10;
    b[i] = 5;
  }
  int mod = 20;
  CIntNR v1(a, mod);
  CIntNR v2(b, mod);
  CIntNR vres = v1 + v2;
  int* c = vres.get_coords();
  for (int i = 0; i < len; i++){
    assert(*(c+i) == (a[i] + b[i]) % mod);
  }
  cout << "Test 1: Correct\n";
}

void test2(){
  int a[len];
  int b[len];
  for (int i = 0; i < len; i++){
    a[i] = 10;
    b[i] = 5;
  }
  int mod = 20;
  CIntNR v1(a, mod);
  CIntNR v2(b, mod);
  CIntNR vres = v1 - v2;
  int* c = vres.get_coords();
  for (int i = 0; i < len; i++){
    assert(*(c+i) == ((a[i] - b[i]) % mod + mod) % mod);
  }
  cout << "Test 2: Correct\n";
}

void test3(){
  int a[len];
  int b[len];
  for (int i = 0; i < len; i++){
    a[i] = 10;
    b[i] = 5;
  }
  int mod = 12;
  CIntNR v1(a, mod);
  CIntNR v2(b, mod);
  CIntNR vres = v1 + v2;
  int* c = vres.get_coords();
  for (int i = 0; i < len; i++){
    assert(*(c+i) == (a[i] + b[i]) % mod);
  }
  cout << "Test 3: Correct\n";
}

void test4(){
  int a[len];
  int b[len];
  for (int i = 0; i < len; i++){
    a[i] = 15;
    b[i] = 2;
  }
  int mod = 5;
  CIntNR v1(a, mod);
  CIntNR v2(b, mod);
  CIntNR vres = v1 - v2;
  int* c = vres.get_coords();
  for (int i = 0; i < len; i++){
    assert(*(c+i) == ((a[i] - b[i]) % mod + mod) % mod);
  }
  cout << "Test 4: Correct\n";
}

void test5(){
  int a[len];
  int b[len];
  for (int i = 0; i < len; i++){
    a[i] = 2;
    b[i] = 15;
  }
  int mod = 5;
  CIntNR v1(a, mod);
  CIntNR v2(b, mod);
  CIntNR vres = v1 - v2;
  int* c = vres.get_coords();
  for (int i = 0; i < len; i++){
    assert(*(c+i) == ((a[i] - b[i]) % mod + mod) % mod);
  }
  cout << "Test 5: Correct\n";
}

void Autotest(){
  cout << "Testing...\n";
  test1();
  test2();
  test3();
  test4();
  test5();
  cout << "Testing is over. Everything is correct\n";
}
