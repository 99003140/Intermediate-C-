#include"currency.h"
#include<gtest/gtest.h>
#include<string>
namespace{
    TEST(Currency,DefaultConstructor)
    {
    Currency C1;
    EXPECT_EQ(0,C1.rupee());
    EXPECT_EQ(0,C1.paise());
    }

    TEST(Currency,ParamConstructor) {
    Currency C1(10,10);
    EXPECT_EQ(10,C1.rupee());
    EXPECT_EQ(10,C1.paise());
    }

    TEST(Distance,SingleParamConstructor) {
    Currency C1(10);
    EXPECT_EQ(10,C1.rupee());
    EXPECT_EQ(0,C1.paise());
    }

    TEST(Currency,PrefixIncrement) {
    Currency C1(50,50);
    ++C1;
    EXPECT_EQ(51,C1.rupee());
    EXPECT_EQ(51,C1.paise());
}
TEST(Currency,PostfixIncrement) {
    Currency C1(50,50);
    C1++;
    EXPECT_EQ(51,C1.rupee());
    EXPECT_EQ(51,C1.paise());
}
}