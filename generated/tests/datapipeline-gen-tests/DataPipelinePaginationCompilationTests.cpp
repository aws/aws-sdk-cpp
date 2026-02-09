/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for DataPipeline pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/datapipeline/DataPipelineClientPagination.h>
#include <aws/datapipeline/DataPipelinePaginationBase.h>
#include <aws/datapipeline/model/QueryObjectsPaginationTraits.h>
#include <aws/datapipeline/model/DescribeObjectsPaginationTraits.h>
#include <aws/datapipeline/model/ListPipelinesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class DataPipelinePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(DataPipelinePaginationCompilationTest, DataPipelinePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
