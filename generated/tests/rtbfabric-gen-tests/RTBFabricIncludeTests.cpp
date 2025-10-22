/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/rtbfabric/RTBFabricClient.h>
#include <aws/rtbfabric/RTBFabricEndpointProvider.h>
#include <aws/rtbfabric/RTBFabricEndpointRules.h>
#include <aws/rtbfabric/RTBFabricErrorMarshaller.h>
#include <aws/rtbfabric/RTBFabricErrors.h>
#include <aws/rtbfabric/RTBFabricRequest.h>
#include <aws/rtbfabric/RTBFabricServiceClientModel.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/AcceptLinkRequest.h>
#include <aws/rtbfabric/model/AcceptLinkResult.h>
#include <aws/rtbfabric/model/Action.h>
#include <aws/rtbfabric/model/AutoScalingGroupsConfiguration.h>
#include <aws/rtbfabric/model/CreateInboundExternalLinkRequest.h>
#include <aws/rtbfabric/model/CreateInboundExternalLinkResult.h>
#include <aws/rtbfabric/model/CreateLinkRequest.h>
#include <aws/rtbfabric/model/CreateLinkResult.h>
#include <aws/rtbfabric/model/CreateOutboundExternalLinkRequest.h>
#include <aws/rtbfabric/model/CreateOutboundExternalLinkResult.h>
#include <aws/rtbfabric/model/CreateRequesterGatewayRequest.h>
#include <aws/rtbfabric/model/CreateRequesterGatewayResult.h>
#include <aws/rtbfabric/model/CreateResponderGatewayRequest.h>
#include <aws/rtbfabric/model/CreateResponderGatewayResult.h>
#include <aws/rtbfabric/model/DeleteInboundExternalLinkRequest.h>
#include <aws/rtbfabric/model/DeleteInboundExternalLinkResult.h>
#include <aws/rtbfabric/model/DeleteLinkRequest.h>
#include <aws/rtbfabric/model/DeleteLinkResult.h>
#include <aws/rtbfabric/model/DeleteOutboundExternalLinkRequest.h>
#include <aws/rtbfabric/model/DeleteOutboundExternalLinkResult.h>
#include <aws/rtbfabric/model/DeleteRequesterGatewayRequest.h>
#include <aws/rtbfabric/model/DeleteRequesterGatewayResult.h>
#include <aws/rtbfabric/model/DeleteResponderGatewayRequest.h>
#include <aws/rtbfabric/model/DeleteResponderGatewayResult.h>
#include <aws/rtbfabric/model/EksEndpointsConfiguration.h>
#include <aws/rtbfabric/model/Filter.h>
#include <aws/rtbfabric/model/FilterCriterion.h>
#include <aws/rtbfabric/model/FilterType.h>
#include <aws/rtbfabric/model/GetInboundExternalLinkRequest.h>
#include <aws/rtbfabric/model/GetInboundExternalLinkResult.h>
#include <aws/rtbfabric/model/GetLinkRequest.h>
#include <aws/rtbfabric/model/GetLinkResult.h>
#include <aws/rtbfabric/model/GetOutboundExternalLinkRequest.h>
#include <aws/rtbfabric/model/GetOutboundExternalLinkResult.h>
#include <aws/rtbfabric/model/GetRequesterGatewayRequest.h>
#include <aws/rtbfabric/model/GetRequesterGatewayResult.h>
#include <aws/rtbfabric/model/GetResponderGatewayRequest.h>
#include <aws/rtbfabric/model/GetResponderGatewayResult.h>
#include <aws/rtbfabric/model/HeaderTagAction.h>
#include <aws/rtbfabric/model/LinkApplicationLogConfiguration.h>
#include <aws/rtbfabric/model/LinkApplicationLogSampling.h>
#include <aws/rtbfabric/model/LinkAttributes.h>
#include <aws/rtbfabric/model/LinkDirection.h>
#include <aws/rtbfabric/model/LinkLogSettings.h>
#include <aws/rtbfabric/model/LinkStatus.h>
#include <aws/rtbfabric/model/ListLinksRequest.h>
#include <aws/rtbfabric/model/ListLinksResponseStructure.h>
#include <aws/rtbfabric/model/ListLinksResult.h>
#include <aws/rtbfabric/model/ListRequesterGatewaysRequest.h>
#include <aws/rtbfabric/model/ListRequesterGatewaysResult.h>
#include <aws/rtbfabric/model/ListResponderGatewaysRequest.h>
#include <aws/rtbfabric/model/ListResponderGatewaysResult.h>
#include <aws/rtbfabric/model/ListTagsForResourceRequest.h>
#include <aws/rtbfabric/model/ListTagsForResourceResult.h>
#include <aws/rtbfabric/model/ManagedEndpointConfiguration.h>
#include <aws/rtbfabric/model/ModuleConfiguration.h>
#include <aws/rtbfabric/model/ModuleParameters.h>
#include <aws/rtbfabric/model/NoBidAction.h>
#include <aws/rtbfabric/model/NoBidModuleParameters.h>
#include <aws/rtbfabric/model/OpenRtbAttributeModuleParameters.h>
#include <aws/rtbfabric/model/Protocol.h>
#include <aws/rtbfabric/model/RejectLinkRequest.h>
#include <aws/rtbfabric/model/RejectLinkResult.h>
#include <aws/rtbfabric/model/RequesterGatewayStatus.h>
#include <aws/rtbfabric/model/ResponderErrorMaskingAction.h>
#include <aws/rtbfabric/model/ResponderErrorMaskingForHttpCode.h>
#include <aws/rtbfabric/model/ResponderErrorMaskingLoggingType.h>
#include <aws/rtbfabric/model/ResponderGatewayStatus.h>
#include <aws/rtbfabric/model/TagResourceRequest.h>
#include <aws/rtbfabric/model/TagResourceResult.h>
#include <aws/rtbfabric/model/TrustStoreConfiguration.h>
#include <aws/rtbfabric/model/UntagResourceRequest.h>
#include <aws/rtbfabric/model/UntagResourceResult.h>
#include <aws/rtbfabric/model/UpdateLinkModuleFlowRequest.h>
#include <aws/rtbfabric/model/UpdateLinkModuleFlowResult.h>
#include <aws/rtbfabric/model/UpdateLinkRequest.h>
#include <aws/rtbfabric/model/UpdateLinkResult.h>
#include <aws/rtbfabric/model/UpdateRequesterGatewayRequest.h>
#include <aws/rtbfabric/model/UpdateRequesterGatewayResult.h>
#include <aws/rtbfabric/model/UpdateResponderGatewayRequest.h>
#include <aws/rtbfabric/model/UpdateResponderGatewayResult.h>

using RTBFabricIncludeTest = ::testing::Test;

TEST_F(RTBFabricIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::RTBFabric::RTBFabricClient>("RTBFabricIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
