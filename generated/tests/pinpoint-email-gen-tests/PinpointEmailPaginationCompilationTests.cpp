/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PinpointEmail pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/pinpoint-email/PinpointEmailClientPagination.h>
#include <aws/pinpoint-email/PinpointEmailPaginationBase.h>
#include <aws/pinpoint-email/model/ListEmailIdentitiesPaginationTraits.h>
#include <aws/pinpoint-email/model/ListDomainDeliverabilityCampaignsPaginationTraits.h>
#include <aws/pinpoint-email/model/GetDedicatedIpsPaginationTraits.h>
#include <aws/pinpoint-email/model/ListDeliverabilityTestReportsPaginationTraits.h>
#include <aws/pinpoint-email/model/ListDedicatedIpPoolsPaginationTraits.h>
#include <aws/pinpoint-email/model/ListConfigurationSetsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PinpointEmailPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PinpointEmailPaginationCompilationTest, PinpointEmailPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
