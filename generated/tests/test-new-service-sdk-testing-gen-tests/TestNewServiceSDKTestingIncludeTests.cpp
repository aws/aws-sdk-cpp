/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingClient.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingEndpointProvider.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingEndpointRules.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingErrorMarshaller.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingErrors.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingRequest.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingServiceClientModel.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTesting_EXPORTS.h>
#include <aws/test-new-service-sdk-testing/model/FooSummary.h>
#include <aws/test-new-service-sdk-testing/model/GetFooRequest.h>
#include <aws/test-new-service-sdk-testing/model/GetFooResult.h>
#include <aws/test-new-service-sdk-testing/model/GetFoosRequest.h>
#include <aws/test-new-service-sdk-testing/model/GetFoosResult.h>
#include <aws/test-new-service-sdk-testing/model/LeaveEvent.h>
#include <aws/test-new-service-sdk-testing/model/Message.h>
#include <aws/test-new-service-sdk-testing/model/NoSuchResource.h>
#include <aws/test-new-service-sdk-testing/model/PublishEvents.h>
#include <aws/test-new-service-sdk-testing/model/PublishFoosRequest.h>

using TestNewServiceSDKTestingIncludeTest = ::testing::Test;

TEST_F(TestNewServiceSDKTestingIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::TestNewServiceSDKTesting::TestNewServiceSDKTestingClient>("TestNewServiceSDKTestingIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
