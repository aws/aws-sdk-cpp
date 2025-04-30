/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/cloudtrail-data/CloudTrailDataClient.h>
#include <aws/cloudtrail-data/CloudTrailDataEndpointProvider.h>
#include <aws/cloudtrail-data/CloudTrailDataEndpointRules.h>
#include <aws/cloudtrail-data/CloudTrailDataErrorMarshaller.h>
#include <aws/cloudtrail-data/CloudTrailDataErrors.h>
#include <aws/cloudtrail-data/CloudTrailDataRequest.h>
#include <aws/cloudtrail-data/CloudTrailDataServiceClientModel.h>
#include <aws/cloudtrail-data/CloudTrailData_EXPORTS.h>
#include <aws/cloudtrail-data/model/AuditEvent.h>
#include <aws/cloudtrail-data/model/AuditEventResultEntry.h>
#include <aws/cloudtrail-data/model/PutAuditEventsRequest.h>
#include <aws/cloudtrail-data/model/PutAuditEventsResult.h>
#include <aws/cloudtrail-data/model/ResultErrorEntry.h>

using CloudTrailDataIncludeTest = ::testing::Test;

TEST_F(CloudTrailDataIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CloudTrailData::CloudTrailDataClient>("CloudTrailDataIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
