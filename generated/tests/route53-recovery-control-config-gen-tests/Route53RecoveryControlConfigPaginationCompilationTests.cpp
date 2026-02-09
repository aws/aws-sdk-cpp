/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Route53RecoveryControlConfig pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigClientPagination.h>
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfigPaginationBase.h>
#include <aws/route53-recovery-control-config/model/ListAssociatedRoute53HealthChecksPaginationTraits.h>
#include <aws/route53-recovery-control-config/model/ListControlPanelsPaginationTraits.h>
#include <aws/route53-recovery-control-config/model/ListRoutingControlsPaginationTraits.h>
#include <aws/route53-recovery-control-config/model/ListClustersPaginationTraits.h>
#include <aws/route53-recovery-control-config/model/ListSafetyRulesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class Route53RecoveryControlConfigPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(Route53RecoveryControlConfigPaginationCompilationTest, Route53RecoveryControlConfigPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
