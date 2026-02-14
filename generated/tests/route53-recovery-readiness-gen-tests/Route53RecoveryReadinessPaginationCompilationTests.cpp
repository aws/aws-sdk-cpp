/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for Route53RecoveryReadiness pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/route53-recovery-readiness/Route53RecoveryReadinessClientPagination.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessPaginationBase.h>
#include <aws/route53-recovery-readiness/model/ListRulesPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/ListRecoveryGroupsPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/GetCellReadinessSummaryPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckResourceStatusPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/GetRecoveryGroupReadinessSummaryPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/GetReadinessCheckStatusPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/ListReadinessChecksPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/ListCellsPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/ListResourceSetsPaginationTraits.h>
#include <aws/route53-recovery-readiness/model/ListCrossAccountAuthorizationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class Route53RecoveryReadinessPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(Route53RecoveryReadinessPaginationCompilationTest, Route53RecoveryReadinessPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
