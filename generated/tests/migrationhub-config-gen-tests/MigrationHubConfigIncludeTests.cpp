/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/migrationhub-config/MigrationHubConfigClient.h>
#include <aws/migrationhub-config/MigrationHubConfigEndpointProvider.h>
#include <aws/migrationhub-config/MigrationHubConfigEndpointRules.h>
#include <aws/migrationhub-config/MigrationHubConfigErrorMarshaller.h>
#include <aws/migrationhub-config/MigrationHubConfigErrors.h>
#include <aws/migrationhub-config/MigrationHubConfigRequest.h>
#include <aws/migrationhub-config/MigrationHubConfigServiceClientModel.h>
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/migrationhub-config/model/CreateHomeRegionControlRequest.h>
#include <aws/migrationhub-config/model/CreateHomeRegionControlResult.h>
#include <aws/migrationhub-config/model/DeleteHomeRegionControlRequest.h>
#include <aws/migrationhub-config/model/DeleteHomeRegionControlResult.h>
#include <aws/migrationhub-config/model/DescribeHomeRegionControlsRequest.h>
#include <aws/migrationhub-config/model/DescribeHomeRegionControlsResult.h>
#include <aws/migrationhub-config/model/GetHomeRegionRequest.h>
#include <aws/migrationhub-config/model/GetHomeRegionResult.h>
#include <aws/migrationhub-config/model/HomeRegionControl.h>
#include <aws/migrationhub-config/model/Target.h>
#include <aws/migrationhub-config/model/TargetType.h>
#include <aws/migrationhub-config/model/ThrottlingException.h>

using MigrationHubConfigIncludeTest = ::testing::Test;

TEST_F(MigrationHubConfigIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MigrationHubConfig::MigrationHubConfigClient>("MigrationHubConfigIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
