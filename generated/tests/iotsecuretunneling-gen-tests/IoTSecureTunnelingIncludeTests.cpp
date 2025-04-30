/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/iotsecuretunneling/IoTSecureTunnelingClient.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingEndpointProvider.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingEndpointRules.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingErrorMarshaller.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingErrors.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingRequest.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingServiceClientModel.h>
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/iotsecuretunneling/model/ClientMode.h>
#include <aws/iotsecuretunneling/model/CloseTunnelRequest.h>
#include <aws/iotsecuretunneling/model/CloseTunnelResult.h>
#include <aws/iotsecuretunneling/model/ConnectionState.h>
#include <aws/iotsecuretunneling/model/ConnectionStatus.h>
#include <aws/iotsecuretunneling/model/DescribeTunnelRequest.h>
#include <aws/iotsecuretunneling/model/DescribeTunnelResult.h>
#include <aws/iotsecuretunneling/model/DestinationConfig.h>
#include <aws/iotsecuretunneling/model/ListTagsForResourceRequest.h>
#include <aws/iotsecuretunneling/model/ListTagsForResourceResult.h>
#include <aws/iotsecuretunneling/model/ListTunnelsRequest.h>
#include <aws/iotsecuretunneling/model/ListTunnelsResult.h>
#include <aws/iotsecuretunneling/model/OpenTunnelRequest.h>
#include <aws/iotsecuretunneling/model/OpenTunnelResult.h>
#include <aws/iotsecuretunneling/model/RotateTunnelAccessTokenRequest.h>
#include <aws/iotsecuretunneling/model/RotateTunnelAccessTokenResult.h>
#include <aws/iotsecuretunneling/model/Tag.h>
#include <aws/iotsecuretunneling/model/TagResourceRequest.h>
#include <aws/iotsecuretunneling/model/TagResourceResult.h>
#include <aws/iotsecuretunneling/model/TimeoutConfig.h>
#include <aws/iotsecuretunneling/model/Tunnel.h>
#include <aws/iotsecuretunneling/model/TunnelStatus.h>
#include <aws/iotsecuretunneling/model/TunnelSummary.h>
#include <aws/iotsecuretunneling/model/UntagResourceRequest.h>
#include <aws/iotsecuretunneling/model/UntagResourceResult.h>

using IoTSecureTunnelingIncludeTest = ::testing::Test;

TEST_F(IoTSecureTunnelingIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::IoTSecureTunneling::IoTSecureTunnelingClient>("IoTSecureTunnelingIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
