/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/echo/EchoClient.h>
#include <aws/echo/EchoEndpointProvider.h>
#include <aws/echo/EchoEndpointRules.h>
#include <aws/echo/EchoErrorMarshaller.h>
#include <aws/echo/EchoErrors.h>
#include <aws/echo/EchoRequest.h>
#include <aws/echo/EchoServiceClientModel.h>
#include <aws/echo/Echo_EXPORTS.h>
#include <aws/echo/model/ComplexStructure.h>
#include <aws/echo/model/EchoOperationRequest.h>
#include <aws/echo/model/EchoOperationResult.h>

using EchoIncludeTest = ::testing::Test;

TEST_F(EchoIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Echo::EchoClient>("EchoIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
