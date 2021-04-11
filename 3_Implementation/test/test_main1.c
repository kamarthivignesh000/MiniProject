#include "main.h"
#include "unity.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int a=0,b=0,c=0;
//int a=1;b=1,c=1;
void test_anding(void)
{
  TEST_ASSERT_EQUAL_INT(0, a); //this one will pass
  //TEST_ASSERT_EQUAL_INT(1, a);( a == 1 ); //this one will pass
  TEST_ASSERT_EQUAL_INT(0, b);//this one will pass
  //TEST_ASSERT_EQUAL_INT(1, a);( b == 1 ); //this one will pass
}

void test_oring(void)
{
  TEST_ASSERT_EQUAL_INT(0, a); //this one will pass
  //TEST_ASSERT_EQUAL_INT(1, a);( a == 1 ); //this one will pass
  TEST_ASSERT_EQUAL_INT(0, b);//this one will pass
  //TEST_ASSERT_EQUAL_INT(1, a);( b == 1 ); //this one will pass
}

void test_Not(void)
{
  TEST_ASSERT( a == 0 ); //this one will pass
  TEST_ASSERT( a == 1 ); //this one will pass
  TEST_ASSERT( b == 0 ); //this one will pass
  TEST_ASSERT( b == 1 ); //this one will pass
}

void test_nand(void)
{
  TEST_ASSERT( a == 0 ); //this one will pass
  TEST_ASSERT( a == 1 ); //this one will pass
  TEST_ASSERT( b == 0 ); //this one will pass
  TEST_ASSERT( b == 1 ); //this one will pass
}

void test_nor(void)
{
  TEST_ASSERT( a == 0 ); //this one will pass
  TEST_ASSERT( a == 1 ); //this one will pass
  TEST_ASSERT( b == 0 ); //this one will pass
  TEST_ASSERT( b == 1 ); //this one will pass
}

void test_ex_or(void)
{
  TEST_ASSERT( a == 0 ); //this one will pass
  TEST_ASSERT( a == 1 ); //this one will pass
  TEST_ASSERT( b == 0 ); //this one will pass
  TEST_ASSERT( b == 1 ); //this one will pass
}

void test_ex_nor(void)
{
  TEST_ASSERT( a == 0 ); //this one will pass
  TEST_ASSERT( a == 1 ); //this one will pass
  TEST_ASSERT( b == 0 ); //this one will pass
  TEST_ASSERT( b == 1 ); //this one will pass
}

void test_half_adder(void)
{
  TEST_ASSERT( a == 0 ); //this one will pass
  TEST_ASSERT( a == 1 ); //this one will pass
  TEST_ASSERT( b == 0 ); //this one will pass
  TEST_ASSERT( b == 1 ); //this one will pass
}

void test_half_subtractor(void)
{
  TEST_ASSERT( a == 0 ); //this one will pass
  TEST_ASSERT( a == 1 ); //this one will pass
  TEST_ASSERT( b == 0 ); //this one will pass
  TEST_ASSERT( b == 1 ); //this one will pass
}

void test_full_adder(void)
{
  TEST_ASSERT( a == 0 ); //this one will pass
  TEST_ASSERT( a == 1 ); //this one will pass
  TEST_ASSERT( b == 0 ); //this one will pass
  TEST_ASSERT( b == 1 ); //this one will pass
  TEST_ASSERT( c == 0 ); //this one will pass
  TEST_ASSERT( c == 1 ); //this one will pass
}

void test_full_subtractor(void)
{
  TEST_ASSERT( a == 0 ); //this one will pass
  TEST_ASSERT( a == 1 ); //this one will pass
  TEST_ASSERT( b == 0 ); //this one will pass
  TEST_ASSERT( b == 1 ); //this one will pass
  TEST_ASSERT( c == 0 ); //this one will pass
  TEST_ASSERT( c == 1 ); //this one will pass
}



int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_anding);
    RUN_TEST(test_oring);
    RUN_TEST(test_Not);
    RUN_TEST(test_nand);
    RUN_TEST(test_nor);
    RUN_TEST(test_ex_or);
    RUN_TEST(test_ex_nor);
    RUN_TEST(test_half_adder);
    RUN_TEST(test_half_subtractor);
    RUN_TEST(test_full_adder);
    RUN_TEST(test_full_subtractor);


    /* Close the Unity Test Framework */
    return UNITY_END();
}