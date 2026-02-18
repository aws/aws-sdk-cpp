/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Batch pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/batch/BatchClientPagination.h>
#include <aws/batch/BatchPaginationBase.h>
#include <aws/batch/model/ListJobsPaginationTraits.h>
#include <aws/batch/model/DescribeComputeEnvironmentsPaginationTraits.h>
#include <aws/batch/model/ListServiceJobsPaginationTraits.h>
#include <aws/batch/model/DescribeJobQueuesPaginationTraits.h>
#include <aws/batch/model/DescribeJobDefinitionsPaginationTraits.h>
#include <aws/batch/model/ListSchedulingPoliciesPaginationTraits.h>
#include <aws/batch/model/ListJobsByConsumableResourcePaginationTraits.h>
#include <aws/batch/model/ListConsumableResourcesPaginationTraits.h>
#include <aws/batch/model/DescribeServiceEnvironmentsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class BatchPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(BatchPaginationCompilationTest, BatchPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
