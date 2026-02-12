/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ChimeSDKMeetings pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/chime-sdk-meetings/ChimeSDKMeetingsClientPagination.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsPaginationBase.h>
#include <aws/chime-sdk-meetings/model/ListAttendeesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ChimeSDKMeetingsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ChimeSDKMeetingsPaginationCompilationTest, ChimeSDKMeetingsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
