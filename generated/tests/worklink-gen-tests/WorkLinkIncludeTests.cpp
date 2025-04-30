/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/worklink/WorkLinkClient.h>
#include <aws/worklink/WorkLinkEndpointProvider.h>
#include <aws/worklink/WorkLinkEndpointRules.h>
#include <aws/worklink/WorkLinkErrorMarshaller.h>
#include <aws/worklink/WorkLinkErrors.h>
#include <aws/worklink/WorkLinkRequest.h>
#include <aws/worklink/WorkLinkServiceClientModel.h>
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/worklink/model/AuthorizationProviderType.h>
#include <aws/worklink/model/DeviceStatus.h>
#include <aws/worklink/model/DeviceSummary.h>
#include <aws/worklink/model/DomainStatus.h>
#include <aws/worklink/model/DomainSummary.h>
#include <aws/worklink/model/FleetStatus.h>
#include <aws/worklink/model/FleetSummary.h>
#include <aws/worklink/model/IdentityProviderType.h>
#include <aws/worklink/model/WebsiteAuthorizationProviderSummary.h>
#include <aws/worklink/model/WebsiteCaSummary.h>

using WorkLinkIncludeTest = ::testing::Test;

TEST_F(WorkLinkIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::WorkLink::WorkLinkClient>("WorkLinkIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
