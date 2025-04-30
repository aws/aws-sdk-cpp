/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsClient.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsEndpointProvider.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsEndpointRules.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsErrorMarshaller.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsErrors.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsRequest.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsServiceClientModel.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/ActiveDirectoryIdentityProvider.h>
#include <aws/license-manager-user-subscriptions/model/ActiveDirectorySettings.h>
#include <aws/license-manager-user-subscriptions/model/ActiveDirectoryType.h>
#include <aws/license-manager-user-subscriptions/model/AssociateUserRequest.h>
#include <aws/license-manager-user-subscriptions/model/AssociateUserResult.h>
#include <aws/license-manager-user-subscriptions/model/CreateLicenseServerEndpointRequest.h>
#include <aws/license-manager-user-subscriptions/model/CreateLicenseServerEndpointResult.h>
#include <aws/license-manager-user-subscriptions/model/CredentialsProvider.h>
#include <aws/license-manager-user-subscriptions/model/DeleteLicenseServerEndpointRequest.h>
#include <aws/license-manager-user-subscriptions/model/DeleteLicenseServerEndpointResult.h>
#include <aws/license-manager-user-subscriptions/model/DeregisterIdentityProviderRequest.h>
#include <aws/license-manager-user-subscriptions/model/DeregisterIdentityProviderResult.h>
#include <aws/license-manager-user-subscriptions/model/DisassociateUserRequest.h>
#include <aws/license-manager-user-subscriptions/model/DisassociateUserResult.h>
#include <aws/license-manager-user-subscriptions/model/DomainNetworkSettings.h>
#include <aws/license-manager-user-subscriptions/model/Filter.h>
#include <aws/license-manager-user-subscriptions/model/IdentityProvider.h>
#include <aws/license-manager-user-subscriptions/model/IdentityProviderSummary.h>
#include <aws/license-manager-user-subscriptions/model/InstanceSummary.h>
#include <aws/license-manager-user-subscriptions/model/InstanceUserSummary.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServer.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServerEndpoint.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServerEndpointProvisioningStatus.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServerHealthStatus.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServerSettings.h>
#include <aws/license-manager-user-subscriptions/model/ListIdentityProvidersRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListIdentityProvidersResult.h>
#include <aws/license-manager-user-subscriptions/model/ListInstancesRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListInstancesResult.h>
#include <aws/license-manager-user-subscriptions/model/ListLicenseServerEndpointsRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListLicenseServerEndpointsResult.h>
#include <aws/license-manager-user-subscriptions/model/ListProductSubscriptionsRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListProductSubscriptionsResult.h>
#include <aws/license-manager-user-subscriptions/model/ListTagsForResourceRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListTagsForResourceResult.h>
#include <aws/license-manager-user-subscriptions/model/ListUserAssociationsRequest.h>
#include <aws/license-manager-user-subscriptions/model/ListUserAssociationsResult.h>
#include <aws/license-manager-user-subscriptions/model/ProductUserSummary.h>
#include <aws/license-manager-user-subscriptions/model/RdsSalSettings.h>
#include <aws/license-manager-user-subscriptions/model/RegisterIdentityProviderRequest.h>
#include <aws/license-manager-user-subscriptions/model/RegisterIdentityProviderResult.h>
#include <aws/license-manager-user-subscriptions/model/SecretsManagerCredentialsProvider.h>
#include <aws/license-manager-user-subscriptions/model/ServerEndpoint.h>
#include <aws/license-manager-user-subscriptions/model/ServerSettings.h>
#include <aws/license-manager-user-subscriptions/model/ServerType.h>
#include <aws/license-manager-user-subscriptions/model/Settings.h>
#include <aws/license-manager-user-subscriptions/model/StartProductSubscriptionRequest.h>
#include <aws/license-manager-user-subscriptions/model/StartProductSubscriptionResult.h>
#include <aws/license-manager-user-subscriptions/model/StopProductSubscriptionRequest.h>
#include <aws/license-manager-user-subscriptions/model/StopProductSubscriptionResult.h>
#include <aws/license-manager-user-subscriptions/model/TagResourceRequest.h>
#include <aws/license-manager-user-subscriptions/model/TagResourceResult.h>
#include <aws/license-manager-user-subscriptions/model/UntagResourceRequest.h>
#include <aws/license-manager-user-subscriptions/model/UntagResourceResult.h>
#include <aws/license-manager-user-subscriptions/model/UpdateIdentityProviderSettingsRequest.h>
#include <aws/license-manager-user-subscriptions/model/UpdateIdentityProviderSettingsResult.h>
#include <aws/license-manager-user-subscriptions/model/UpdateSettings.h>

using LicenseManagerUserSubscriptionsIncludeTest = ::testing::Test;

TEST_F(LicenseManagerUserSubscriptionsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::LicenseManagerUserSubscriptions::LicenseManagerUserSubscriptionsClient>("LicenseManagerUserSubscriptionsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
