#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "helpers/squareRootTest.cpp"
#include "classes/MyClassTest.cpp"
#include "classes/MyClassWithSetupTest.cpp"
#include "classes/SubjectTest.cpp"

int main(int argc, char **argv)
{
    // The following line must be executed to initialize Google Mock
    // (and Google Test) before running the tests.
    //testing::InitGoogleMock(&argc, argv);
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}