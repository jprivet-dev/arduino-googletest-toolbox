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

TEST_F(SubjectTestSetup, attach_no_observer)
{
    // Assert
    ASSERT_EQ(sub->observers.size(), 0);
}

TEST_F(SubjectTestSetup, attach_1_observer)
{
    // Act
    sub->attach();

    // Assert
    ASSERT_EQ(sub->observers.size(), 1);
}

TEST_F(SubjectTestSetup, attach_3_observers)
{
    // Act
    sub->attach();
    sub->attach();
    sub->attach();

    // Assert
    ASSERT_EQ(sub->observers.size(), 3);
}