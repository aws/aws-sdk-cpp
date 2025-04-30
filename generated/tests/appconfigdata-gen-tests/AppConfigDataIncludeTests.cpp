/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/appconfigdata/AppConfigDataClient.h>
#include <aws/appconfigdata/AppConfigDataEndpointProvider.h>
#include <aws/appconfigdata/AppConfigDataEndpointRules.h>
#include <aws/appconfigdata/AppConfigDataErrorMarshaller.h>
#include <aws/appconfigdata/AppConfigDataErrors.h>
#include <aws/appconfigdata/AppConfigDataRequest.h>
#include <aws/appconfigdata/AppConfigDataServiceClientModel.h>
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/appconfigdata/model/BadRequestDetails.h>
#include <aws/appconfigdata/model/BadRequestException.h>
#include <aws/appconfigdata/model/BadRequestReason.h>
#include <aws/appconfigdata/model/GetLatestConfigurationRequest.h>
#include <aws/appconfigdata/model/GetLatestConfigurationResult.h>
#include <aws/appconfigdata/model/InvalidParameterDetail.h>
#include <aws/appconfigdata/model/InvalidParameterProblem.h>
#include <aws/appconfigdata/model/ResourceNotFoundException.h>
#include <aws/appconfigdata/model/ResourceType.h>
#include <aws/appconfigdata/model/StartConfigurationSessionRequest.h>
#include <aws/appconfigdata/model/StartConfigurationSessionResult.h>

using AppConfigDataIncludeTest = ::testing::Test;

TEST_F(AppConfigDataIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AppConfigData::AppConfigDataClient>("AppConfigDataIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
