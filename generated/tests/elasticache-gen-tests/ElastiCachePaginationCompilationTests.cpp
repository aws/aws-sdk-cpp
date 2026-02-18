/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ElastiCache pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/elasticache/ElastiCacheClientPagination.h>
#include <aws/elasticache/ElastiCachePaginationBase.h>
#include <aws/elasticache/model/DescribeCacheClustersPaginationTraits.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesPaginationTraits.h>
#include <aws/elasticache/model/DescribeReplicationGroupsPaginationTraits.h>
#include <aws/elasticache/model/DescribeReservedCacheNodesOfferingsPaginationTraits.h>
#include <aws/elasticache/model/DescribeServerlessCacheSnapshotsPaginationTraits.h>
#include <aws/elasticache/model/DescribeCacheSubnetGroupsPaginationTraits.h>
#include <aws/elasticache/model/DescribeEngineDefaultParametersPaginationTraits.h>
#include <aws/elasticache/model/DescribeCacheParametersPaginationTraits.h>
#include <aws/elasticache/model/DescribeCacheSecurityGroupsPaginationTraits.h>
#include <aws/elasticache/model/DescribeServerlessCachesPaginationTraits.h>
#include <aws/elasticache/model/DescribeUserGroupsPaginationTraits.h>
#include <aws/elasticache/model/DescribeEventsPaginationTraits.h>
#include <aws/elasticache/model/DescribeCacheParameterGroupsPaginationTraits.h>
#include <aws/elasticache/model/DescribeGlobalReplicationGroupsPaginationTraits.h>
#include <aws/elasticache/model/DescribeCacheEngineVersionsPaginationTraits.h>
#include <aws/elasticache/model/DescribeServiceUpdatesPaginationTraits.h>
#include <aws/elasticache/model/DescribeSnapshotsPaginationTraits.h>
#include <aws/elasticache/model/DescribeUsersPaginationTraits.h>
#include <aws/elasticache/model/DescribeUpdateActionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ElastiCachePaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ElastiCachePaginationCompilationTest, ElastiCachePaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
