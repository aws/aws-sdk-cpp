/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ElasticLoadBalancing pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/elasticloadbalancing/ElasticLoadBalancingClientPagination.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingPaginationBase.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancersPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ElasticLoadBalancingPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ElasticLoadBalancingPaginationCompilationTest, ElasticLoadBalancingPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
