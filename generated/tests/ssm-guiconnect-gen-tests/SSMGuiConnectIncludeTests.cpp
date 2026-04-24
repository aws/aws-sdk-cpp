/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/ssm-guiconnect/SSMGuiConnectClient.h>
#include <aws/ssm-guiconnect/SSMGuiConnectEndpointProvider.h>
#include <aws/ssm-guiconnect/SSMGuiConnectEndpointRules.h>
#include <aws/ssm-guiconnect/SSMGuiConnectErrorMarshaller.h>
#include <aws/ssm-guiconnect/SSMGuiConnectErrors.h>
#include <aws/ssm-guiconnect/SSMGuiConnectRequest.h>
#include <aws/ssm-guiconnect/SSMGuiConnectServiceClientModel.h>
#include <aws/ssm-guiconnect/SSMGuiConnect_EXPORTS.h>
#include <aws/ssm-guiconnect/model/ConnectionRecordingPreferences.h>
#include <aws/ssm-guiconnect/model/DeleteConnectionRecordingPreferencesRequest.h>
#include <aws/ssm-guiconnect/model/DeleteConnectionRecordingPreferencesResult.h>
#include <aws/ssm-guiconnect/model/GetConnectionRecordingPreferencesRequest.h>
#include <aws/ssm-guiconnect/model/GetConnectionRecordingPreferencesResult.h>
#include <aws/ssm-guiconnect/model/RecordingDestinations.h>
#include <aws/ssm-guiconnect/model/S3Bucket.h>
#include <aws/ssm-guiconnect/model/UpdateConnectionRecordingPreferencesRequest.h>
#include <aws/ssm-guiconnect/model/UpdateConnectionRecordingPreferencesResult.h>

using SSMGuiConnectIncludeTest = ::testing::Test;

TEST_F(SSMGuiConnectIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::SSMGuiConnect::SSMGuiConnectClient>("SSMGuiConnectIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
