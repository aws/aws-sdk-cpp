/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/account-access/AccountAccessClient.h>
#include <aws/account-access/AccountAccessClientPagination.h>
#include <aws/account-access/AccountAccessEndpointProvider.h>
#include <aws/account-access/AccountAccessErrorMarshaller.h>
#include <aws/account-access/AccountAccessErrors.h>
#include <aws/account-access/AccountAccessPaginationBase.h>
#include <aws/account-access/AccountAccessRequest.h>
#include <aws/account-access/AccountAccessServiceClientModel.h>
#include <aws/account-access/AccountAccessWaiter.h>
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/account-access/internal/AccountAccessEndpointRules.h>
#include <aws/account-access/model/ApplicationSummary.h>
#include <aws/account-access/model/CreateApplicationRequest.h>
#include <aws/account-access/model/CreateApplicationResult.h>
#include <aws/account-access/model/CreateEntitlementRequest.h>
#include <aws/account-access/model/CreateEntitlementResult.h>
#include <aws/account-access/model/DeleteApplicationRequest.h>
#include <aws/account-access/model/DeleteApplicationResult.h>
#include <aws/account-access/model/DeleteEntitlementRequest.h>
#include <aws/account-access/model/DeleteEntitlementResult.h>
#include <aws/account-access/model/Entitlement.h>
#include <aws/account-access/model/EntitlementDetails.h>
#include <aws/account-access/model/EntitlementFilter.h>
#include <aws/account-access/model/EntitlementSummary.h>
#include <aws/account-access/model/EntitlementsListMember.h>
#include <aws/account-access/model/ErrorCode.h>
#include <aws/account-access/model/ErrorDetails.h>
#include <aws/account-access/model/GetApplicationRequest.h>
#include <aws/account-access/model/GetApplicationResult.h>
#include <aws/account-access/model/GetEntitlementRequest.h>
#include <aws/account-access/model/GetEntitlementResult.h>
#include <aws/account-access/model/IdentityCenter.h>
#include <aws/account-access/model/IdentityCenterDetails.h>
#include <aws/account-access/model/IdentityCenterPrincipal.h>
#include <aws/account-access/model/IdentityCenterPrincipalFilter.h>
#include <aws/account-access/model/IdentitySource.h>
#include <aws/account-access/model/IdentitySourceDetails.h>
#include <aws/account-access/model/ListApplicationsPaginationTraits.h>
#include <aws/account-access/model/ListApplicationsRequest.h>
#include <aws/account-access/model/ListApplicationsResult.h>
#include <aws/account-access/model/ListEntitlementsPaginationTraits.h>
#include <aws/account-access/model/ListEntitlementsRequest.h>
#include <aws/account-access/model/ListEntitlementsResult.h>
#include <aws/account-access/model/ListTagsForResourceRequest.h>
#include <aws/account-access/model/ListTagsForResourceResult.h>
#include <aws/account-access/model/Principal.h>
#include <aws/account-access/model/PrincipalFilter.h>
#include <aws/account-access/model/PrincipalRoleEntitlement.h>
#include <aws/account-access/model/PrincipalRoleEntitlementDetails.h>
#include <aws/account-access/model/PrincipalRoleEntitlementFilter.h>
#include <aws/account-access/model/PrincipalRoleEntitlementSummary.h>
#include <aws/account-access/model/Status.h>
#include <aws/account-access/model/TagResourceRequest.h>
#include <aws/account-access/model/TagResourceResult.h>
#include <aws/account-access/model/UntagResourceRequest.h>
#include <aws/account-access/model/UntagResourceResult.h>

using AccountAccessIncludeTest = ::testing::Test;

TEST_F(AccountAccessIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AccountAccess::AccountAccessClient>("AccountAccessIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
