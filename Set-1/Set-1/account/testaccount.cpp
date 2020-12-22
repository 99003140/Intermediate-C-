#include "account.h"
#include <gtest/gtest.h>
namespace {
TEST(Account, Empty_Constructor) {
    Account A1;
  EXPECT_EQ(0, A1.getBalance());
}

TEST(Account, Parameterized_Constructor) {
    Account A1("100","Sindhu",500.0);
    A1.debit(10.0);
    A1.credit(100.0);
  EXPECT_EQ(590.0, A1.getBalance());
}

TEST(Account, Copy_Constructor) {
    Account A1("100","Sindhu",500.0);
    //A2.debit(20.0);
    //A2.credit(200.0);
    Account A2(A1);
  EXPECT_EQ(500.0, A2.getBalance());
}
}