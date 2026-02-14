/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Support pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/support/SupportClientPagination.h>
#include <aws/support/SupportPaginationBase.h>
#include <aws/support/model/DescribeCasesPaginationTraits.h>
#include <aws/support/model/DescribeCommunicationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SupportPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SupportPaginationCompilationTest, SupportPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
