/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PCS pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/pcs/PCSClientPagination.h>
#include <aws/pcs/PCSPaginationBase.h>
#include <aws/pcs/model/ListComputeNodeGroupsPaginationTraits.h>
#include <aws/pcs/model/ListQueuesPaginationTraits.h>
#include <aws/pcs/model/ListClustersPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PCSPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PCSPaginationCompilationTest, PCSPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
