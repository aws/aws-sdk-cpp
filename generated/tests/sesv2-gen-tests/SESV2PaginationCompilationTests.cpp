/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SESV2 pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/sesv2/SESV2ClientPagination.h>
#include <aws/sesv2/SESV2PaginationBase.h>
#include <aws/sesv2/model/ListDomainDeliverabilityCampaignsPaginationTraits.h>
#include <aws/sesv2/model/ListResourceTenantsPaginationTraits.h>
#include <aws/sesv2/model/ListSuppressedDestinationsPaginationTraits.h>
#include <aws/sesv2/model/ListConfigurationSetsPaginationTraits.h>
#include <aws/sesv2/model/ListContactListsPaginationTraits.h>
#include <aws/sesv2/model/ListDedicatedIpPoolsPaginationTraits.h>
#include <aws/sesv2/model/ListDeliverabilityTestReportsPaginationTraits.h>
#include <aws/sesv2/model/ListEmailTemplatesPaginationTraits.h>
#include <aws/sesv2/model/ListTenantResourcesPaginationTraits.h>
#include <aws/sesv2/model/ListExportJobsPaginationTraits.h>
#include <aws/sesv2/model/ListCustomVerificationEmailTemplatesPaginationTraits.h>
#include <aws/sesv2/model/ListImportJobsPaginationTraits.h>
#include <aws/sesv2/model/ListTenantsPaginationTraits.h>
#include <aws/sesv2/model/ListContactsPaginationTraits.h>
#include <aws/sesv2/model/ListReputationEntitiesPaginationTraits.h>
#include <aws/sesv2/model/GetDedicatedIpsPaginationTraits.h>
#include <aws/sesv2/model/ListEmailIdentitiesPaginationTraits.h>
#include <aws/sesv2/model/ListMultiRegionEndpointsPaginationTraits.h>
#include <aws/sesv2/model/ListRecommendationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SESV2PaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SESV2PaginationCompilationTest, SESV2PaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
