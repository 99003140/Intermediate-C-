#include"mytime.h"
#include<gtest/gtest.h>
namespace{
    TEST(MyTime,EmptyConstructor)
    {
    MyTime M1;
    EXPECT_EQ(0.0,M1.gethours());
    EXPECT_EQ(0.0,M1.getminutes());
    EXPECT_EQ(0.0,M1.getseconds());
    }
    TEST(MyTime,ParamConstructor) {
    MyTime M1(8,30,30);
    EXPECT_EQ(8,M1.gethours());
    EXPECT_EQ(30,M1.getminutes());
    EXPECT_EQ(30,M1.getseconds());
    }
    TEST(MyTime,CopyConstructor) {
    MyTime M1(8,30,30);
    MyTime M2(M1);
    EXPECT_EQ(8,M2.gethours());
    EXPECT_EQ(30,M2.getminutes());
    EXPECT_EQ(30,M2.getseconds());
    }

}