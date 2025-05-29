/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/mwaa/MWAAClient.h>
#include <aws/mwaa/MWAAEndpointProvider.h>
#include <aws/mwaa/MWAAEndpointRules.h>
#include <aws/mwaa/MWAAErrorMarshaller.h>
#include <aws/mwaa/MWAAErrors.h>
#include <aws/mwaa/MWAARequest.h>
#include <aws/mwaa/MWAAServiceClientModel.h>
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/mwaa/model/CreateCliTokenRequest.h>
#include <aws/mwaa/model/CreateCliTokenResult.h>
#include <aws/mwaa/model/CreateEnvironmentRequest.h>
#include <aws/mwaa/model/CreateEnvironmentResult.h>
#include <aws/mwaa/model/CreateWebLoginTokenRequest.h>
#include <aws/mwaa/model/CreateWebLoginTokenResult.h>
#include <aws/mwaa/model/DeleteEnvironmentRequest.h>
#include <aws/mwaa/model/DeleteEnvironmentResult.h>
#include <aws/mwaa/model/Dimension.h>
#include <aws/mwaa/model/EndpointManagement.h>
#include <aws/mwaa/model/Environment.h>
#include <aws/mwaa/model/EnvironmentStatus.h>
#include <aws/mwaa/model/GetEnvironmentRequest.h>
#include <aws/mwaa/model/GetEnvironmentResult.h>
#include <aws/mwaa/model/InvokeRestApiRequest.h>
#include <aws/mwaa/model/InvokeRestApiResult.h>
#include <aws/mwaa/model/LastUpdate.h>
#include <aws/mwaa/model/ListEnvironmentsRequest.h>
#include <aws/mwaa/model/ListEnvironmentsResult.h>
#include <aws/mwaa/model/ListTagsForResourceRequest.h>
#include <aws/mwaa/model/ListTagsForResourceResult.h>
#include <aws/mwaa/model/LoggingConfiguration.h>
#include <aws/mwaa/model/LoggingConfigurationInput.h>
#include <aws/mwaa/model/LoggingLevel.h>
#include <aws/mwaa/model/MetricDatum.h>
#include <aws/mwaa/model/ModuleLoggingConfiguration.h>
#include <aws/mwaa/model/ModuleLoggingConfigurationInput.h>
#include <aws/mwaa/model/NetworkConfiguration.h>
#include <aws/mwaa/model/RestApiClientException.h>
#include <aws/mwaa/model/RestApiMethod.h>
#include <aws/mwaa/model/RestApiServerException.h>
#include <aws/mwaa/model/StatisticSet.h>
#include <aws/mwaa/model/TagResourceRequest.h>
#include <aws/mwaa/model/TagResourceResult.h>
#include <aws/mwaa/model/Unit.h>
#include <aws/mwaa/model/UntagResourceRequest.h>
#include <aws/mwaa/model/UntagResourceResult.h>
#include <aws/mwaa/model/UpdateEnvironmentRequest.h>
#include <aws/mwaa/model/UpdateEnvironmentResult.h>
#include <aws/mwaa/model/UpdateError.h>
#include <aws/mwaa/model/UpdateNetworkConfigurationInput.h>
#include <aws/mwaa/model/UpdateStatus.h>
#include <aws/mwaa/model/WebserverAccessMode.h>
#include <aws/mwaa/model/WorkerReplacementStrategy.h>

using MWAAIncludeTest = ::testing::Test;

TEST_F(MWAAIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MWAA::MWAAClient>("MWAAIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
