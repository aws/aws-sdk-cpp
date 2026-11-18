/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AbuseSignal pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/abuse-signal/AbuseSignalClientPagination.h>
#include <aws/abuse-signal/AbuseSignalPaginationBase.h>
#include <aws/abuse-signal/model/ListAbuseReportStatusesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AbuseSignalPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AbuseSignalPaginationCompilationTest, AbuseSignalPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
