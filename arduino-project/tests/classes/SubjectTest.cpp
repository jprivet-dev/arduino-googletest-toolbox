#include "../../src/classes/Subject.cpp"

struct SubjectTestSetup : public testing::Test
{
    Subject *sub;
    string observer;
    __observer *observerObj;

    void SetUp()
    {
        // Arrange
        sub = new Subject();
        observer = "abc";
        observerObj = new __observer();
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
    ASSERT_EQ(sub->observersObj.size(), 0);
}

TEST_F(SubjectTestSetup, attach_1_observer)
{
    // Act
    sub->attach(observer);

    // Assert
    ASSERT_EQ(sub->observers.size(), 1);
}

TEST_F(SubjectTestSetup, attach_3_observers)
{
    // Act
    sub->attach(observer);
    sub->attach(observer);
    sub->attach(observer);

    // Assert
    ASSERT_EQ(sub->observers.size(), 3);
}