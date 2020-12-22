#include"distance.h"
#include<gtest/gtest.h>
namespace{
    TEST(Distance,EmptyConstructor)
    {
    Distance D1;
    EXPECT_EQ(0.0,D1.getfeets());
    EXPECT_EQ(0.0,D1.getinches());
    }

    TEST(Distance,ParamConstructor) {
    Distance D1(8,30);
    EXPECT_EQ(8,D1.getfeets());
    EXPECT_EQ(30,D1.getinches());
    }

    TEST(Distance,SingleParamConstructor) {
    Distance D1(10);
    EXPECT_EQ(10,D1.getfeets());
    EXPECT_EQ(0,D1.getinches());
    }


    TEST(Distance,CopyConstructor) {
    Distance D1(8,30);
    Distance D2(D1);
    EXPECT_EQ(8,D2.getfeets());
    EXPECT_EQ(30,D2.getinches());
    }
}