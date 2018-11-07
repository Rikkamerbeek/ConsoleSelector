#include "SystemController.h"
#include "mConsole.h"
#include "mEventGenerator.h"
#include "mRad.h"
#include "mSwitch.h"

using ::testing::Return;
using ::testing::_;

class testSystemController : public ::testing::Test
{
protected:
    testSystemController()
    : system(console, event, rad, switcher)
    {
    }

    virtual ~testSystemController() {}
    
    mConsole console;
    mEventGenerator event;
    mRad rad;
    mSwitch switcher;
};