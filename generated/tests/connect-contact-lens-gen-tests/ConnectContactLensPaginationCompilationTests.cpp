/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ConnectContactLens pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/connect-contact-lens/ConnectContactLensClientPagination.h>
#include <aws/connect-contact-lens/ConnectContactLensPaginationBase.h>
#include <aws/connect-contact-lens/model/ListRealtimeContactAnalysisSegmentsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ConnectContactLensPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ConnectContactLensPaginationCompilationTest, ConnectContactLensPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
