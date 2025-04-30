/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/support-app/SupportAppClient.h>
#include <aws/support-app/SupportAppEndpointProvider.h>
#include <aws/support-app/SupportAppEndpointRules.h>
#include <aws/support-app/SupportAppErrorMarshaller.h>
#include <aws/support-app/SupportAppErrors.h>
#include <aws/support-app/SupportAppRequest.h>
#include <aws/support-app/SupportAppServiceClientModel.h>
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/support-app/model/AccountType.h>
#include <aws/support-app/model/CreateSlackChannelConfigurationRequest.h>
#include <aws/support-app/model/CreateSlackChannelConfigurationResult.h>
#include <aws/support-app/model/DeleteAccountAliasRequest.h>
#include <aws/support-app/model/DeleteAccountAliasResult.h>
#include <aws/support-app/model/DeleteSlackChannelConfigurationRequest.h>
#include <aws/support-app/model/DeleteSlackChannelConfigurationResult.h>
#include <aws/support-app/model/DeleteSlackWorkspaceConfigurationRequest.h>
#include <aws/support-app/model/DeleteSlackWorkspaceConfigurationResult.h>
#include <aws/support-app/model/GetAccountAliasRequest.h>
#include <aws/support-app/model/GetAccountAliasResult.h>
#include <aws/support-app/model/ListSlackChannelConfigurationsRequest.h>
#include <aws/support-app/model/ListSlackChannelConfigurationsResult.h>
#include <aws/support-app/model/ListSlackWorkspaceConfigurationsRequest.h>
#include <aws/support-app/model/ListSlackWorkspaceConfigurationsResult.h>
#include <aws/support-app/model/NotificationSeverityLevel.h>
#include <aws/support-app/model/PutAccountAliasRequest.h>
#include <aws/support-app/model/PutAccountAliasResult.h>
#include <aws/support-app/model/RegisterSlackWorkspaceForOrganizationRequest.h>
#include <aws/support-app/model/RegisterSlackWorkspaceForOrganizationResult.h>
#include <aws/support-app/model/SlackChannelConfiguration.h>
#include <aws/support-app/model/SlackWorkspaceConfiguration.h>
#include <aws/support-app/model/UpdateSlackChannelConfigurationRequest.h>
#include <aws/support-app/model/UpdateSlackChannelConfigurationResult.h>

using SupportAppIncludeTest = ::testing::Test;

TEST_F(SupportAppIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SupportApp::SupportAppClient>("SupportAppIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
