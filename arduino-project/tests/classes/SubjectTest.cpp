#include "../../src/classes/Subject.cpp"

struct SubjectTestSetup : public testing::Test
{
    Subject *sub;

    void SetUp()
    {
        // Arrange
        sub = new Subject("myname");
    }

    void TearDown()
    {
        delete sub;
    }
};

TEST_F(SubjectTestSetup, get_name)
{
    // Act
    string name = sub->getName();

    // Assert
    ASSERT_STREQ(name.c_str(), "myname");
}