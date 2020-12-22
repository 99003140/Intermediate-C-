#include "customer.h"
#include <gtest/gtest.h>
namespace {
TEST(Customer, Empty_Constructor) {
    Customer C1;
  EXPECT_EQ(0, C1.getBalance());
}

TEST(Customer, Parameterized_Constructor) {
    Customer C1("100","Sindhu","500",100.00);
    C1.credit(100.0);
    C1.makeCall(30.00);
  EXPECT_EQ(170.0, C1.getBalance());
}

TEST(Customer, Copy_Constructor) {
    Customer C1("100","Sindhu","500",100.00);
    C1.credit(100.0);
    C1.makeCall(30.00);
   Customer C2(C1);
  EXPECT_EQ(170.0, C2.getBalance());
}
}