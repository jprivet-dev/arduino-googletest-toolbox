
#include <gtest/gtest.h>
#include "helpers/squareRootTest.cpp"
#include "classes/MyClassTest.cpp"
#include "classes/MyClassWithSetupTest.cpp"

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}