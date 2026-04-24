/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/iot-data/IoTDataPlaneClient.h>
#include <aws/iot-data/IoTDataPlaneEndpointProvider.h>
#include <aws/iot-data/IoTDataPlaneEndpointRules.h>
#include <aws/iot-data/IoTDataPlaneErrorMarshaller.h>
#include <aws/iot-data/IoTDataPlaneErrors.h>
#include <aws/iot-data/IoTDataPlaneRequest.h>
#include <aws/iot-data/IoTDataPlaneServiceClientModel.h>
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/iot-data/model/DeleteConnectionRequest.h>
#include <aws/iot-data/model/DeleteThingShadowRequest.h>
#include <aws/iot-data/model/DeleteThingShadowResult.h>
#include <aws/iot-data/model/GetRetainedMessageRequest.h>
#include <aws/iot-data/model/GetRetainedMessageResult.h>
#include <aws/iot-data/model/GetThingShadowRequest.h>
#include <aws/iot-data/model/GetThingShadowResult.h>
#include <aws/iot-data/model/ListNamedShadowsForThingRequest.h>
#include <aws/iot-data/model/ListNamedShadowsForThingResult.h>
#include <aws/iot-data/model/ListRetainedMessagesRequest.h>
#include <aws/iot-data/model/ListRetainedMessagesResult.h>
#include <aws/iot-data/model/PayloadFormatIndicator.h>
#include <aws/iot-data/model/PublishRequest.h>
#include <aws/iot-data/model/RetainedMessageSummary.h>
#include <aws/iot-data/model/UpdateThingShadowRequest.h>
#include <aws/iot-data/model/UpdateThingShadowResult.h>

using IoTDataPlaneIncludeTest = ::testing::Test;

TEST_F(IoTDataPlaneIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::IoTDataPlane::IoTDataPlaneClient>("IoTDataPlaneIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
