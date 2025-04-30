/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/forecastquery/ForecastQueryServiceClient.h>
#include <aws/forecastquery/ForecastQueryServiceEndpointProvider.h>
#include <aws/forecastquery/ForecastQueryServiceEndpointRules.h>
#include <aws/forecastquery/ForecastQueryServiceErrorMarshaller.h>
#include <aws/forecastquery/ForecastQueryServiceErrors.h>
#include <aws/forecastquery/ForecastQueryServiceRequest.h>
#include <aws/forecastquery/ForecastQueryServiceServiceClientModel.h>
#include <aws/forecastquery/ForecastQueryService_EXPORTS.h>
#include <aws/forecastquery/model/DataPoint.h>
#include <aws/forecastquery/model/Forecast.h>
#include <aws/forecastquery/model/QueryForecastRequest.h>
#include <aws/forecastquery/model/QueryForecastResult.h>
#include <aws/forecastquery/model/QueryWhatIfForecastRequest.h>
#include <aws/forecastquery/model/QueryWhatIfForecastResult.h>

using ForecastQueryServiceIncludeTest = ::testing::Test;

TEST_F(ForecastQueryServiceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ForecastQueryService::ForecastQueryServiceClient>("ForecastQueryServiceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
