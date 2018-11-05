#include "RemoteController.h"
#include "mConsole.h"
#include "mDisplay.h"
#include "mEventGenerator.h"

using ::testing::Return;
using ::testing::_;

class TestRemoteController : public ::testing::Test
{
protected:
    TestRemoteController() : remote(console, display, event)
    {
    }

    virtual ~TestRemoteController() {}

    mConsole console;
    mDisplay display;
    mEventGenerator event;
};

TEST_F(TestRemoteController, enter_selecting_state)
{
    EXPECT_CALL(console, SetConsole());
    EXPECT_EQ(STATE_SELECTING, remote.HandleStandbyState(TapScreen));
}