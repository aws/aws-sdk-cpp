/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiClient.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiEndpointProvider.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiEndpointRules.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiErrorMarshaller.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiErrors.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiRequest.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApiServiceClientModel.h>
#include <aws/apigatewaymanagementapi/ApiGatewayManagementApi_EXPORTS.h>
#include <aws/apigatewaymanagementapi/model/DeleteConnectionRequest.h>
#include <aws/apigatewaymanagementapi/model/GetConnectionRequest.h>
#include <aws/apigatewaymanagementapi/model/GetConnectionResult.h>
#include <aws/apigatewaymanagementapi/model/Identity.h>
#include <aws/apigatewaymanagementapi/model/PostToConnectionRequest.h>

using ApiGatewayManagementApiIncludeTest = ::testing::Test;

TEST_F(ApiGatewayManagementApiIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ApiGatewayManagementApi::ApiGatewayManagementApiClient>("ApiGatewayManagementApiIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
