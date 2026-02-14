/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ConnectParticipant pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/connectparticipant/ConnectParticipantClientPagination.h>
#include <aws/connectparticipant/ConnectParticipantPaginationBase.h>
#include <aws/connectparticipant/model/GetTranscriptPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ConnectParticipantPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ConnectParticipantPaginationCompilationTest, ConnectParticipantPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
