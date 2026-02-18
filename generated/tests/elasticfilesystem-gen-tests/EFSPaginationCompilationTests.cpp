/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for EFS pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/elasticfilesystem/EFSClientPagination.h>
#include <aws/elasticfilesystem/EFSPaginationBase.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemsPaginationTraits.h>
#include <aws/elasticfilesystem/model/ListTagsForResourcePaginationTraits.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetsPaginationTraits.h>
#include <aws/elasticfilesystem/model/DescribeReplicationConfigurationsPaginationTraits.h>
#include <aws/elasticfilesystem/model/DescribeAccessPointsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class EFSPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(EFSPaginationCompilationTest, EFSPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
