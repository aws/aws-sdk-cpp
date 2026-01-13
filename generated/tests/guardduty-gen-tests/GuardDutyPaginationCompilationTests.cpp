/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for GuardDuty pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/guardduty/GuardDutyClientPagination.h>
#include <aws/guardduty/GuardDutyPaginationBase.h>
#include <aws/guardduty/model/ListFindingsPaginationTraits.h>
#include <aws/guardduty/model/ListThreatIntelSetsPaginationTraits.h>
#include <aws/guardduty/model/GetUsageStatisticsPaginationTraits.h>
#include <aws/guardduty/model/ListOrganizationAdminAccountsPaginationTraits.h>
#include <aws/guardduty/model/ListFiltersPaginationTraits.h>
#include <aws/guardduty/model/ListInvitationsPaginationTraits.h>
#include <aws/guardduty/model/ListPublishingDestinationsPaginationTraits.h>
#include <aws/guardduty/model/ListMembersPaginationTraits.h>
#include <aws/guardduty/model/ListTrustedEntitySetsPaginationTraits.h>
#include <aws/guardduty/model/ListThreatEntitySetsPaginationTraits.h>
#include <aws/guardduty/model/ListMalwareScansPaginationTraits.h>
#include <aws/guardduty/model/DescribeMalwareScansPaginationTraits.h>
#include <aws/guardduty/model/ListDetectorsPaginationTraits.h>
#include <aws/guardduty/model/ListCoveragePaginationTraits.h>
#include <aws/guardduty/model/ListIPSetsPaginationTraits.h>
#include <aws/guardduty/model/DescribeOrganizationConfigurationPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class GuardDutyPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(GuardDutyPaginationCompilationTest, GuardDutyPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
