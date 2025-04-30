/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/cognito-sync/CognitoSyncClient.h>
#include <aws/cognito-sync/CognitoSyncEndpointProvider.h>
#include <aws/cognito-sync/CognitoSyncEndpointRules.h>
#include <aws/cognito-sync/CognitoSyncErrorMarshaller.h>
#include <aws/cognito-sync/CognitoSyncErrors.h>
#include <aws/cognito-sync/CognitoSyncRequest.h>
#include <aws/cognito-sync/CognitoSyncServiceClientModel.h>
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/model/BulkPublishRequest.h>
#include <aws/cognito-sync/model/BulkPublishResult.h>
#include <aws/cognito-sync/model/BulkPublishStatus.h>
#include <aws/cognito-sync/model/CognitoStreams.h>
#include <aws/cognito-sync/model/Dataset.h>
#include <aws/cognito-sync/model/DeleteDatasetRequest.h>
#include <aws/cognito-sync/model/DeleteDatasetResult.h>
#include <aws/cognito-sync/model/DescribeDatasetRequest.h>
#include <aws/cognito-sync/model/DescribeDatasetResult.h>
#include <aws/cognito-sync/model/DescribeIdentityPoolUsageRequest.h>
#include <aws/cognito-sync/model/DescribeIdentityPoolUsageResult.h>
#include <aws/cognito-sync/model/DescribeIdentityUsageRequest.h>
#include <aws/cognito-sync/model/DescribeIdentityUsageResult.h>
#include <aws/cognito-sync/model/GetBulkPublishDetailsRequest.h>
#include <aws/cognito-sync/model/GetBulkPublishDetailsResult.h>
#include <aws/cognito-sync/model/GetCognitoEventsRequest.h>
#include <aws/cognito-sync/model/GetCognitoEventsResult.h>
#include <aws/cognito-sync/model/GetIdentityPoolConfigurationRequest.h>
#include <aws/cognito-sync/model/GetIdentityPoolConfigurationResult.h>
#include <aws/cognito-sync/model/IdentityPoolUsage.h>
#include <aws/cognito-sync/model/IdentityUsage.h>
#include <aws/cognito-sync/model/ListDatasetsRequest.h>
#include <aws/cognito-sync/model/ListDatasetsResult.h>
#include <aws/cognito-sync/model/ListIdentityPoolUsageRequest.h>
#include <aws/cognito-sync/model/ListIdentityPoolUsageResult.h>
#include <aws/cognito-sync/model/ListRecordsRequest.h>
#include <aws/cognito-sync/model/ListRecordsResult.h>
#include <aws/cognito-sync/model/Operation.h>
#include <aws/cognito-sync/model/Platform.h>
#include <aws/cognito-sync/model/PushSync.h>
#include <aws/cognito-sync/model/Record.h>
#include <aws/cognito-sync/model/RecordPatch.h>
#include <aws/cognito-sync/model/RegisterDeviceRequest.h>
#include <aws/cognito-sync/model/RegisterDeviceResult.h>
#include <aws/cognito-sync/model/SetCognitoEventsRequest.h>
#include <aws/cognito-sync/model/SetIdentityPoolConfigurationRequest.h>
#include <aws/cognito-sync/model/SetIdentityPoolConfigurationResult.h>
#include <aws/cognito-sync/model/StreamingStatus.h>
#include <aws/cognito-sync/model/SubscribeToDatasetRequest.h>
#include <aws/cognito-sync/model/SubscribeToDatasetResult.h>
#include <aws/cognito-sync/model/UnsubscribeFromDatasetRequest.h>
#include <aws/cognito-sync/model/UnsubscribeFromDatasetResult.h>
#include <aws/cognito-sync/model/UpdateRecordsRequest.h>
#include <aws/cognito-sync/model/UpdateRecordsResult.h>

using CognitoSyncIncludeTest = ::testing::Test;

TEST_F(CognitoSyncIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CognitoSync::CognitoSyncClient>("CognitoSyncIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
