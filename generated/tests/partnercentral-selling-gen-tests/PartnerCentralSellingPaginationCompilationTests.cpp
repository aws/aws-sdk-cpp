/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for PartnerCentralSelling pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/partnercentral-selling/PartnerCentralSellingClientPagination.h>
#include <aws/partnercentral-selling/PartnerCentralSellingPaginationBase.h>
#include <aws/partnercentral-selling/model/ListEngagementsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementInvitationsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementMembersPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListSolutionsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementByAcceptingInvitationTasksPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementFromOpportunityTasksPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListEngagementResourceAssociationsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListOpportunityFromEngagementTasksPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListOpportunitiesPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListResourceSnapshotsPaginationTraits.h>
#include <aws/partnercentral-selling/model/ListResourceSnapshotJobsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class PartnerCentralSellingPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(PartnerCentralSellingPaginationCompilationTest, PartnerCentralSellingPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
