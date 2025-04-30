/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/privatenetworks/PrivateNetworksClient.h>
#include <aws/privatenetworks/PrivateNetworksEndpointProvider.h>
#include <aws/privatenetworks/PrivateNetworksEndpointRules.h>
#include <aws/privatenetworks/PrivateNetworksErrorMarshaller.h>
#include <aws/privatenetworks/PrivateNetworksErrors.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/privatenetworks/PrivateNetworksServiceClientModel.h>
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/AcknowledgeOrderReceiptRequest.h>
#include <aws/privatenetworks/model/AcknowledgeOrderReceiptResult.h>
#include <aws/privatenetworks/model/AcknowledgmentStatus.h>
#include <aws/privatenetworks/model/ActivateDeviceIdentifierRequest.h>
#include <aws/privatenetworks/model/ActivateDeviceIdentifierResult.h>
#include <aws/privatenetworks/model/ActivateNetworkSiteRequest.h>
#include <aws/privatenetworks/model/ActivateNetworkSiteResult.h>
#include <aws/privatenetworks/model/Address.h>
#include <aws/privatenetworks/model/CommitmentConfiguration.h>
#include <aws/privatenetworks/model/CommitmentInformation.h>
#include <aws/privatenetworks/model/CommitmentLength.h>
#include <aws/privatenetworks/model/ConfigureAccessPointRequest.h>
#include <aws/privatenetworks/model/ConfigureAccessPointResult.h>
#include <aws/privatenetworks/model/CreateNetworkRequest.h>
#include <aws/privatenetworks/model/CreateNetworkResult.h>
#include <aws/privatenetworks/model/CreateNetworkSiteRequest.h>
#include <aws/privatenetworks/model/CreateNetworkSiteResult.h>
#include <aws/privatenetworks/model/DeactivateDeviceIdentifierRequest.h>
#include <aws/privatenetworks/model/DeactivateDeviceIdentifierResult.h>
#include <aws/privatenetworks/model/DeleteNetworkRequest.h>
#include <aws/privatenetworks/model/DeleteNetworkResult.h>
#include <aws/privatenetworks/model/DeleteNetworkSiteRequest.h>
#include <aws/privatenetworks/model/DeleteNetworkSiteResult.h>
#include <aws/privatenetworks/model/DeviceIdentifier.h>
#include <aws/privatenetworks/model/DeviceIdentifierFilterKeys.h>
#include <aws/privatenetworks/model/DeviceIdentifierStatus.h>
#include <aws/privatenetworks/model/ElevationReference.h>
#include <aws/privatenetworks/model/ElevationUnit.h>
#include <aws/privatenetworks/model/GetDeviceIdentifierRequest.h>
#include <aws/privatenetworks/model/GetDeviceIdentifierResult.h>
#include <aws/privatenetworks/model/GetNetworkRequest.h>
#include <aws/privatenetworks/model/GetNetworkResourceRequest.h>
#include <aws/privatenetworks/model/GetNetworkResourceResult.h>
#include <aws/privatenetworks/model/GetNetworkResult.h>
#include <aws/privatenetworks/model/GetNetworkSiteRequest.h>
#include <aws/privatenetworks/model/GetNetworkSiteResult.h>
#include <aws/privatenetworks/model/GetOrderRequest.h>
#include <aws/privatenetworks/model/GetOrderResult.h>
#include <aws/privatenetworks/model/HealthStatus.h>
#include <aws/privatenetworks/model/InternalServerException.h>
#include <aws/privatenetworks/model/ListDeviceIdentifiersRequest.h>
#include <aws/privatenetworks/model/ListDeviceIdentifiersResult.h>
#include <aws/privatenetworks/model/ListNetworkResourcesRequest.h>
#include <aws/privatenetworks/model/ListNetworkResourcesResult.h>
#include <aws/privatenetworks/model/ListNetworkSitesRequest.h>
#include <aws/privatenetworks/model/ListNetworkSitesResult.h>
#include <aws/privatenetworks/model/ListNetworksRequest.h>
#include <aws/privatenetworks/model/ListNetworksResult.h>
#include <aws/privatenetworks/model/ListOrdersRequest.h>
#include <aws/privatenetworks/model/ListOrdersResult.h>
#include <aws/privatenetworks/model/ListTagsForResourceRequest.h>
#include <aws/privatenetworks/model/ListTagsForResourceResult.h>
#include <aws/privatenetworks/model/NameValuePair.h>
#include <aws/privatenetworks/model/Network.h>
#include <aws/privatenetworks/model/NetworkFilterKeys.h>
#include <aws/privatenetworks/model/NetworkResource.h>
#include <aws/privatenetworks/model/NetworkResourceDefinition.h>
#include <aws/privatenetworks/model/NetworkResourceDefinitionType.h>
#include <aws/privatenetworks/model/NetworkResourceFilterKeys.h>
#include <aws/privatenetworks/model/NetworkResourceStatus.h>
#include <aws/privatenetworks/model/NetworkResourceType.h>
#include <aws/privatenetworks/model/NetworkSite.h>
#include <aws/privatenetworks/model/NetworkSiteFilterKeys.h>
#include <aws/privatenetworks/model/NetworkSiteStatus.h>
#include <aws/privatenetworks/model/NetworkStatus.h>
#include <aws/privatenetworks/model/Order.h>
#include <aws/privatenetworks/model/OrderFilterKeys.h>
#include <aws/privatenetworks/model/OrderedResourceDefinition.h>
#include <aws/privatenetworks/model/PingRequest.h>
#include <aws/privatenetworks/model/PingResult.h>
#include <aws/privatenetworks/model/Position.h>
#include <aws/privatenetworks/model/ResourceNotFoundException.h>
#include <aws/privatenetworks/model/ReturnInformation.h>
#include <aws/privatenetworks/model/SitePlan.h>
#include <aws/privatenetworks/model/StartNetworkResourceUpdateRequest.h>
#include <aws/privatenetworks/model/StartNetworkResourceUpdateResult.h>
#include <aws/privatenetworks/model/TagResourceRequest.h>
#include <aws/privatenetworks/model/TagResourceResult.h>
#include <aws/privatenetworks/model/TrackingInformation.h>
#include <aws/privatenetworks/model/UntagResourceRequest.h>
#include <aws/privatenetworks/model/UntagResourceResult.h>
#include <aws/privatenetworks/model/UpdateNetworkSitePlanRequest.h>
#include <aws/privatenetworks/model/UpdateNetworkSitePlanResult.h>
#include <aws/privatenetworks/model/UpdateNetworkSiteRequest.h>
#include <aws/privatenetworks/model/UpdateNetworkSiteResult.h>
#include <aws/privatenetworks/model/UpdateType.h>
#include <aws/privatenetworks/model/ValidationException.h>
#include <aws/privatenetworks/model/ValidationExceptionField.h>
#include <aws/privatenetworks/model/ValidationExceptionReason.h>

using PrivateNetworksIncludeTest = ::testing::Test;

TEST_F(PrivateNetworksIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PrivateNetworks::PrivateNetworksClient>("PrivateNetworksIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
