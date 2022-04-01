/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/external/gtest.h>
#include <aws/core/utils/GetTheLights.h>

using namespace Aws::Utils;

TEST(GetTheLightsTest, Test_Lights_TurnOff)
{    
    GetTheLights getTheLights;

    bool firstInGotTheLights(false);
    getTheLights.EnterRoom([&]{ firstInGotTheLights = true; });
    getTheLights.EnterRoom([]{ ASSERT_TRUE(false); });
    getTheLights.EnterRoom([]{ ASSERT_TRUE(false); });
    getTheLights.EnterRoom([]{ ASSERT_TRUE(false); });
    getTheLights.EnterRoom([]{ ASSERT_TRUE(false); });

    ASSERT_TRUE(firstInGotTheLights);

    getTheLights.LeaveRoom([]{ ASSERT_TRUE(false); });
    getTheLights.LeaveRoom([]{ ASSERT_TRUE(false); });
    getTheLights.LeaveRoom([]{ ASSERT_TRUE(false); });
    getTheLights.LeaveRoom([]{ ASSERT_TRUE(false); });

    bool lastOutGotTheLights(false);
    getTheLights.LeaveRoom([&]{lastOutGotTheLights = true; });

    ASSERT_TRUE(lastOutGotTheLights);
}