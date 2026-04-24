/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/ssm-quicksetup/SSMQuickSetupClient.h>
#include <aws/ssm-quicksetup/SSMQuickSetupEndpointProvider.h>
#include <aws/ssm-quicksetup/SSMQuickSetupEndpointRules.h>
#include <aws/ssm-quicksetup/SSMQuickSetupErrorMarshaller.h>
#include <aws/ssm-quicksetup/SSMQuickSetupErrors.h>
#include <aws/ssm-quicksetup/SSMQuickSetupRequest.h>
#include <aws/ssm-quicksetup/SSMQuickSetupServiceClientModel.h>
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/ssm-quicksetup/model/ConfigurationDefinition.h>
#include <aws/ssm-quicksetup/model/ConfigurationDefinitionInput.h>
#include <aws/ssm-quicksetup/model/ConfigurationDefinitionSummary.h>
#include <aws/ssm-quicksetup/model/ConfigurationManagerSummary.h>
#include <aws/ssm-quicksetup/model/ConfigurationSummary.h>
#include <aws/ssm-quicksetup/model/CreateConfigurationManagerRequest.h>
#include <aws/ssm-quicksetup/model/CreateConfigurationManagerResult.h>
#include <aws/ssm-quicksetup/model/DeleteConfigurationManagerRequest.h>
#include <aws/ssm-quicksetup/model/Filter.h>
#include <aws/ssm-quicksetup/model/GetConfigurationManagerRequest.h>
#include <aws/ssm-quicksetup/model/GetConfigurationManagerResult.h>
#include <aws/ssm-quicksetup/model/GetConfigurationRequest.h>
#include <aws/ssm-quicksetup/model/GetConfigurationResult.h>
#include <aws/ssm-quicksetup/model/GetServiceSettingsRequest.h>
#include <aws/ssm-quicksetup/model/GetServiceSettingsResult.h>
#include <aws/ssm-quicksetup/model/ListConfigurationManagersRequest.h>
#include <aws/ssm-quicksetup/model/ListConfigurationManagersResult.h>
#include <aws/ssm-quicksetup/model/ListConfigurationsRequest.h>
#include <aws/ssm-quicksetup/model/ListConfigurationsResult.h>
#include <aws/ssm-quicksetup/model/ListQuickSetupTypesRequest.h>
#include <aws/ssm-quicksetup/model/ListQuickSetupTypesResult.h>
#include <aws/ssm-quicksetup/model/ListTagsForResourceRequest.h>
#include <aws/ssm-quicksetup/model/ListTagsForResourceResult.h>
#include <aws/ssm-quicksetup/model/QuickSetupTypeOutput.h>
#include <aws/ssm-quicksetup/model/ServiceSettings.h>
#include <aws/ssm-quicksetup/model/Status.h>
#include <aws/ssm-quicksetup/model/StatusSummary.h>
#include <aws/ssm-quicksetup/model/StatusType.h>
#include <aws/ssm-quicksetup/model/TagEntry.h>
#include <aws/ssm-quicksetup/model/TagResourceRequest.h>
#include <aws/ssm-quicksetup/model/UntagResourceRequest.h>
#include <aws/ssm-quicksetup/model/UpdateConfigurationDefinitionRequest.h>
#include <aws/ssm-quicksetup/model/UpdateConfigurationManagerRequest.h>
#include <aws/ssm-quicksetup/model/UpdateServiceSettingsRequest.h>

using SSMQuickSetupIncludeTest = ::testing::Test;

TEST_F(SSMQuickSetupIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SSMQuickSetup::SSMQuickSetupClient>("SSMQuickSetupIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
