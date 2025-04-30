/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/iotfleethub/IoTFleetHubClient.h>
#include <aws/iotfleethub/IoTFleetHubEndpointProvider.h>
#include <aws/iotfleethub/IoTFleetHubEndpointRules.h>
#include <aws/iotfleethub/IoTFleetHubErrorMarshaller.h>
#include <aws/iotfleethub/IoTFleetHubErrors.h>
#include <aws/iotfleethub/IoTFleetHubRequest.h>
#include <aws/iotfleethub/IoTFleetHubServiceClientModel.h>
#include <aws/iotfleethub/IoTFleetHub_EXPORTS.h>
#include <aws/iotfleethub/model/ApplicationState.h>
#include <aws/iotfleethub/model/ApplicationSummary.h>
#include <aws/iotfleethub/model/CreateApplicationRequest.h>
#include <aws/iotfleethub/model/CreateApplicationResult.h>
#include <aws/iotfleethub/model/DeleteApplicationRequest.h>
#include <aws/iotfleethub/model/DeleteApplicationResult.h>
#include <aws/iotfleethub/model/DescribeApplicationRequest.h>
#include <aws/iotfleethub/model/DescribeApplicationResult.h>
#include <aws/iotfleethub/model/ListApplicationsRequest.h>
#include <aws/iotfleethub/model/ListApplicationsResult.h>
#include <aws/iotfleethub/model/ListTagsForResourceRequest.h>
#include <aws/iotfleethub/model/ListTagsForResourceResult.h>
#include <aws/iotfleethub/model/TagResourceRequest.h>
#include <aws/iotfleethub/model/TagResourceResult.h>
#include <aws/iotfleethub/model/UntagResourceRequest.h>
#include <aws/iotfleethub/model/UntagResourceResult.h>
#include <aws/iotfleethub/model/UpdateApplicationRequest.h>
#include <aws/iotfleethub/model/UpdateApplicationResult.h>

using IoTFleetHubIncludeTest = ::testing::Test;

TEST_F(IoTFleetHubIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::IoTFleetHub::IoTFleetHubClient>("IoTFleetHubIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
