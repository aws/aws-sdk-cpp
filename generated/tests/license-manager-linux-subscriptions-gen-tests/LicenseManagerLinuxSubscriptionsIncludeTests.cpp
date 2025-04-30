/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsClient.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsEndpointProvider.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsEndpointRules.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsErrorMarshaller.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsErrors.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsRequest.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsServiceClientModel.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/license-manager-linux-subscriptions/model/DeregisterSubscriptionProviderRequest.h>
#include <aws/license-manager-linux-subscriptions/model/DeregisterSubscriptionProviderResult.h>
#include <aws/license-manager-linux-subscriptions/model/Filter.h>
#include <aws/license-manager-linux-subscriptions/model/GetRegisteredSubscriptionProviderRequest.h>
#include <aws/license-manager-linux-subscriptions/model/GetRegisteredSubscriptionProviderResult.h>
#include <aws/license-manager-linux-subscriptions/model/GetServiceSettingsRequest.h>
#include <aws/license-manager-linux-subscriptions/model/GetServiceSettingsResult.h>
#include <aws/license-manager-linux-subscriptions/model/Instance.h>
#include <aws/license-manager-linux-subscriptions/model/LinuxSubscriptionsDiscovery.h>
#include <aws/license-manager-linux-subscriptions/model/LinuxSubscriptionsDiscoverySettings.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionInstancesRequest.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionInstancesResult.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionsRequest.h>
#include <aws/license-manager-linux-subscriptions/model/ListLinuxSubscriptionsResult.h>
#include <aws/license-manager-linux-subscriptions/model/ListRegisteredSubscriptionProvidersRequest.h>
#include <aws/license-manager-linux-subscriptions/model/ListRegisteredSubscriptionProvidersResult.h>
#include <aws/license-manager-linux-subscriptions/model/ListTagsForResourceRequest.h>
#include <aws/license-manager-linux-subscriptions/model/ListTagsForResourceResult.h>
#include <aws/license-manager-linux-subscriptions/model/Operator.h>
#include <aws/license-manager-linux-subscriptions/model/OrganizationIntegration.h>
#include <aws/license-manager-linux-subscriptions/model/RegisterSubscriptionProviderRequest.h>
#include <aws/license-manager-linux-subscriptions/model/RegisterSubscriptionProviderResult.h>
#include <aws/license-manager-linux-subscriptions/model/RegisteredSubscriptionProvider.h>
#include <aws/license-manager-linux-subscriptions/model/Status.h>
#include <aws/license-manager-linux-subscriptions/model/Subscription.h>
#include <aws/license-manager-linux-subscriptions/model/SubscriptionProviderSource.h>
#include <aws/license-manager-linux-subscriptions/model/SubscriptionProviderStatus.h>
#include <aws/license-manager-linux-subscriptions/model/TagResourceRequest.h>
#include <aws/license-manager-linux-subscriptions/model/TagResourceResult.h>
#include <aws/license-manager-linux-subscriptions/model/UntagResourceRequest.h>
#include <aws/license-manager-linux-subscriptions/model/UntagResourceResult.h>
#include <aws/license-manager-linux-subscriptions/model/UpdateServiceSettingsRequest.h>
#include <aws/license-manager-linux-subscriptions/model/UpdateServiceSettingsResult.h>

using LicenseManagerLinuxSubscriptionsIncludeTest = ::testing::Test;

TEST_F(LicenseManagerLinuxSubscriptionsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::LicenseManagerLinuxSubscriptions::LicenseManagerLinuxSubscriptionsClient>("LicenseManagerLinuxSubscriptionsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
