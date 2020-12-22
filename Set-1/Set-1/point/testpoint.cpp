#include"point.h"
#include <gtest/gtest.h>
namespace 
{
    TEST(Point,Empty_Cosnstructor)
    {
        Point p1;
        EXPECT_EQ(0, p1.distanceFromOrigin());
    }
    TEST(Point,parameterized_Cosnstructor)
    {
        Point p1(0.0,4.0);
        EXPECT_EQ(4.0, p1.distanceFromOrigin());
        EXPECT_EQ(false, p1.isOrigin());
        EXPECT_EQ(false, p1.isOnXAxis());
        EXPECT_EQ(true, p1.isOnYAxis());
    }

    TEST(Point,Copy_Constructor)
    {
        Point p1(0.0,4.0);
        Point p2(p1);
        EXPECT_EQ(4.0,p2.distanceFromOrigin());
        EXPECT_EQ(false, p2.isOrigin());
        EXPECT_EQ(false, p2.isOnXAxis());
        EXPECT_EQ(true, p2.isOnYAxis());
    }
}
