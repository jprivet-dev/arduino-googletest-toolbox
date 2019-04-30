#include "../../src/classes/Subject.cpp"

struct SubjectTestSetup : public testing::Test
{
    Subject *sub;

    void SetUp()
    {
        // Arrange
        sub = new Subject();
    }

    void TearDown()
    {
        delete sub;
    }
};

TEST_F(SubjectTestSetup, attach_no_observer)
{
    // Assert
    ASSERT_EQ(sub->observers.size(), 0);
}

TEST_F(SubjectTestSetup, attach_1_observer)
{
    // Act
    sub->attach("abc");

    // Assert
    ASSERT_EQ(sub->observers.size(), 1);
}

TEST_F(SubjectTestSetup, attach_3_observers)
{
    // Act
    sub->attach("abc");
    sub->attach("abc");
    sub->attach("abc");

    // Assert
    ASSERT_EQ(sub->observers.size(), 3);
}