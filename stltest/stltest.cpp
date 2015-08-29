// stltest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "..\stl\vector.h"
#include <vector>
#include <iostream>

struct testS {
  int a;
  int b;
  testS(const testS& other)
    : a(other.a)
    , b(other.b)
  {
    std::cout << "Test S construct a:" << a << " b:" << b << std::endl;
  }

  testS()
    : a(0), b(0)
  {
    std::cout << "Test S construct1 a:" << a << " b:" << b << std::endl;
  }
  testS(int _a, int _b)
    : a(_a), b(_b)
  {
    std::cout << "Test S construct2 a:" << a << " b:" << b << std::endl;
  }

  ~testS() {
    std::cout << "Test S deconstruct a:" << a << " b:" << b << std::endl;
  }
};

int _tmain(int argc, _TCHAR* argv[])
{
//   int ia[5] = {0,1,2,3,4};
//   unsigned int i;
//   std::vector<int, ctd::allocator<int> > iv(ia, ia+5);
//   for (i = 0; i < iv.size(); i++)
//   {
//     std::cout << iv[i] << '    ';
//   }
//   iv.clear();

  testS t1;
  testS t2(1, 2);
  testS t3(3, 4);

  std::cout << "start construct----------------------------" << std::endl;
  std::vector<testS, ctd::allocator<testS> > test_iv;
  test_iv.reserve(5);
  std::cout << "start construct----------------------------" << std::endl;
  test_iv.push_back(t1);
  std::cout << "start construct----------------------------" << std::endl;
  test_iv.push_back(t2);
  std::cout << "start construct----------------------------" << std::endl;
  test_iv.push_back(t3);
  std::cout << "start construct----------------------------" << std::endl;

  test_iv.clear();
  std::cout << "start construct----------------------------" << std::endl;

  std::cout << std::endl;
	return 0;
}

