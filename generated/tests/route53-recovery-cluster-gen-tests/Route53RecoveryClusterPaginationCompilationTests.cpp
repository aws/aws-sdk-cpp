/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Route53RecoveryCluster pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/route53-recovery-cluster/Route53RecoveryClusterClientPagination.h>
#include <aws/route53-recovery-cluster/Route53RecoveryClusterPaginationBase.h>
#include <aws/route53-recovery-cluster/model/ListRoutingControlsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class Route53RecoveryClusterPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(Route53RecoveryClusterPaginationCompilationTest, Route53RecoveryClusterPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
