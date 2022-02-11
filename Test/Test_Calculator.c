#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PROJECT_NAME    "Calculator"

void test_addition(void);
void test_subtraction(void);
void test_multiplication(void);
void test_division(void);
void test_modulus(void);
void test_power(void);
void test_factorial(void);
void test_square(void);
void test_cube(void);
void test_squareroot(void);

int main()
{
   if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  
  CU_add_test(suite, "addition", test_addition);
  CU_add_test(suite, "subtraction", test_subtraction);
  CU_add_test(suite, "multiplication", test_multiplication);
  CU_add_test(suite, "division", test_division);
  CU_add_test(suite, "modulus", test_modulus);
  CU_add_test(suite, "power", test_power);
  CU_add_test(suite, "factorial", test_factorial);
  CU_add_test(suite, "square", test_square);
  CU_add_test(suite, "cube", test_cube);
  CU_add_test(suite, "squareroot", test_squareroot);
  
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();
  return 0;
 }
 
 void test_addition(void)
 {
          CU_ASSERT(70 == addition(50, 20));
		  CU_ASSERT(30000 == addition(15000, 15000));
		  
		  CU_ASSERT(1550 == addition(110, 1220));
 }
 
 void test_subtraction(void)
 {
          CU_ASSERT(700 == subtraction(1500, 800));
          CU_ASSERT(-6 == subtraction(0, 6));
		  
          CU_ASSERT(35 == subtraction(78, 10));
 }
 
 void test_multiplication(void)
 {
          CU_ASSERT(70000 == multiplication(700, 100));
	  CU_ASSERT(0 == multiplication(7, 0));
		  
          CU_ASSERT(4 == multiplication(3, 2));
 }
 
 void test_division(void)
 {
          CU_ASSERT(0 == division(3, 0)); 
          CU_ASSERT(90 == division(900, 10));
		  
	  CU_ASSERT(9 == division(80, 10));
 }
 
 void test_modulus(void)
 {
          CU_ASSERT(0 == modulus(60, 10));
	  CU_ASSERT(5 == modulus(35, 6));
		  
	  CU_ASSERT(2 == modulus(43, 7));
 }
 
 void test_power(void)
 {
           CU_ASSERT(9 == power(3, 2));
	   CU_ASSERT(1 == power(3, 0));
		   
	   CU_ASSERT(80 == power(3, 4));
 }
 
 void test_factorial(void)
 {
             CU_ASSERT(6 == factorial(3));
	     CU_ASSERT(1 == factorial(0));
	     CU_ASSERT(1 == factorial(1));
			 
	     CU_ASSERT(22 == factorial(4));
 }

void test_square(void)
 {
             CU_ASSERT(9 == square(3));
	     CU_ASSERT(0 == square(0));
	     CU_ASSERT(81 == square(9));
			 
	     CU_ASSERT(25 == square(5));
 }

void test_cube(void)
 {
             CU_ASSERT(27 == cube(3));
	     CU_ASSERT(0 == cube(0));
	     CU_ASSERT(729 == cube(9));
			 
	     CU_ASSERT(125 == cube(5));
 }
void test_squareroot(void)
 {
             CU_ASSERT(5 == squareroot(25));
	     CU_ASSERT(0 == squareroot(0));
	     CU_ASSERT(13 == squareroot(169));
			 
	     CU_ASSERT(8 == squareroot(64));
 }
