/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for MemoryDB pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/memorydb/MemoryDBClientPagination.h>
#include <aws/memorydb/MemoryDBPaginationBase.h>
#include <aws/memorydb/model/DescribeUsersPaginationTraits.h>
#include <aws/memorydb/model/DescribeSubnetGroupsPaginationTraits.h>
#include <aws/memorydb/model/DescribeMultiRegionClustersPaginationTraits.h>
#include <aws/memorydb/model/DescribeServiceUpdatesPaginationTraits.h>
#include <aws/memorydb/model/DescribeReservedNodesOfferingsPaginationTraits.h>
#include <aws/memorydb/model/DescribeEventsPaginationTraits.h>
#include <aws/memorydb/model/DescribeEngineVersionsPaginationTraits.h>
#include <aws/memorydb/model/DescribeParametersPaginationTraits.h>
#include <aws/memorydb/model/DescribeParameterGroupsPaginationTraits.h>
#include <aws/memorydb/model/DescribeReservedNodesPaginationTraits.h>
#include <aws/memorydb/model/DescribeClustersPaginationTraits.h>
#include <aws/memorydb/model/DescribeSnapshotsPaginationTraits.h>
#include <aws/memorydb/model/DescribeACLsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class MemoryDBPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(MemoryDBPaginationCompilationTest, MemoryDBPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
