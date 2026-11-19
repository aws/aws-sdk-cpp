/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PartnerCentralMarketing pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/partnercentral-marketing/PartnerCentralMarketingClientPagination.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingPaginationBase.h>
#include <aws/partnercentral-marketing/model/ListSocialConnectionsPaginationTraits.h>
#include <aws/partnercentral-marketing/model/ListCampaignsPaginationTraits.h>
#include <aws/partnercentral-marketing/model/SearchCampaignTemplatesPaginationTraits.h>
#include <aws/partnercentral-marketing/model/ListCampaignAssetsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PartnerCentralMarketingPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PartnerCentralMarketingPaginationCompilationTest, PartnerCentralMarketingPaginationHeadersCompile)
{
      // Test passes if compilation succeeds
      SUCCEED();
}
