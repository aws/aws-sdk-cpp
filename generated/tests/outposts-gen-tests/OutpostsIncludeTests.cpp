/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/outposts/OutpostsClient.h>
#include <aws/outposts/OutpostsEndpointProvider.h>
#include <aws/outposts/OutpostsEndpointRules.h>
#include <aws/outposts/OutpostsErrorMarshaller.h>
#include <aws/outposts/OutpostsErrors.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/outposts/OutpostsServiceClientModel.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/AWSServiceName.h>
#include <aws/outposts/model/Address.h>
#include <aws/outposts/model/AddressType.h>
#include <aws/outposts/model/AssetInfo.h>
#include <aws/outposts/model/AssetInstance.h>
#include <aws/outposts/model/AssetInstanceTypeCapacity.h>
#include <aws/outposts/model/AssetLocation.h>
#include <aws/outposts/model/AssetState.h>
#include <aws/outposts/model/AssetType.h>
#include <aws/outposts/model/BlockingInstance.h>
#include <aws/outposts/model/CancelCapacityTaskRequest.h>
#include <aws/outposts/model/CancelCapacityTaskResult.h>
#include <aws/outposts/model/CancelOrderRequest.h>
#include <aws/outposts/model/CancelOrderResult.h>
#include <aws/outposts/model/CapacityTaskFailure.h>
#include <aws/outposts/model/CapacityTaskFailureType.h>
#include <aws/outposts/model/CapacityTaskStatus.h>
#include <aws/outposts/model/CapacityTaskSummary.h>
#include <aws/outposts/model/CatalogItem.h>
#include <aws/outposts/model/CatalogItemClass.h>
#include <aws/outposts/model/CatalogItemStatus.h>
#include <aws/outposts/model/ComputeAssetState.h>
#include <aws/outposts/model/ComputeAttributes.h>
#include <aws/outposts/model/ConflictException.h>
#include <aws/outposts/model/ConnectionDetails.h>
#include <aws/outposts/model/CreateOrderRequest.h>
#include <aws/outposts/model/CreateOrderResult.h>
#include <aws/outposts/model/CreateOutpostRequest.h>
#include <aws/outposts/model/CreateOutpostResult.h>
#include <aws/outposts/model/CreateSiteRequest.h>
#include <aws/outposts/model/CreateSiteResult.h>
#include <aws/outposts/model/DeleteOutpostRequest.h>
#include <aws/outposts/model/DeleteOutpostResult.h>
#include <aws/outposts/model/DeleteSiteRequest.h>
#include <aws/outposts/model/DeleteSiteResult.h>
#include <aws/outposts/model/EC2Capacity.h>
#include <aws/outposts/model/FiberOpticCableType.h>
#include <aws/outposts/model/GetCapacityTaskRequest.h>
#include <aws/outposts/model/GetCapacityTaskResult.h>
#include <aws/outposts/model/GetCatalogItemRequest.h>
#include <aws/outposts/model/GetCatalogItemResult.h>
#include <aws/outposts/model/GetConnectionRequest.h>
#include <aws/outposts/model/GetConnectionResult.h>
#include <aws/outposts/model/GetOrderRequest.h>
#include <aws/outposts/model/GetOrderResult.h>
#include <aws/outposts/model/GetOutpostInstanceTypesRequest.h>
#include <aws/outposts/model/GetOutpostInstanceTypesResult.h>
#include <aws/outposts/model/GetOutpostRequest.h>
#include <aws/outposts/model/GetOutpostResult.h>
#include <aws/outposts/model/GetOutpostSupportedInstanceTypesRequest.h>
#include <aws/outposts/model/GetOutpostSupportedInstanceTypesResult.h>
#include <aws/outposts/model/GetSiteAddressRequest.h>
#include <aws/outposts/model/GetSiteAddressResult.h>
#include <aws/outposts/model/GetSiteRequest.h>
#include <aws/outposts/model/GetSiteResult.h>
#include <aws/outposts/model/InstanceTypeCapacity.h>
#include <aws/outposts/model/InstanceTypeItem.h>
#include <aws/outposts/model/InstancesToExclude.h>
#include <aws/outposts/model/LineItem.h>
#include <aws/outposts/model/LineItemAssetInformation.h>
#include <aws/outposts/model/LineItemRequest.h>
#include <aws/outposts/model/LineItemStatus.h>
#include <aws/outposts/model/ListAssetInstancesRequest.h>
#include <aws/outposts/model/ListAssetInstancesResult.h>
#include <aws/outposts/model/ListAssetsRequest.h>
#include <aws/outposts/model/ListAssetsResult.h>
#include <aws/outposts/model/ListBlockingInstancesForCapacityTaskRequest.h>
#include <aws/outposts/model/ListBlockingInstancesForCapacityTaskResult.h>
#include <aws/outposts/model/ListCapacityTasksRequest.h>
#include <aws/outposts/model/ListCapacityTasksResult.h>
#include <aws/outposts/model/ListCatalogItemsRequest.h>
#include <aws/outposts/model/ListCatalogItemsResult.h>
#include <aws/outposts/model/ListOrdersRequest.h>
#include <aws/outposts/model/ListOrdersResult.h>
#include <aws/outposts/model/ListOutpostsRequest.h>
#include <aws/outposts/model/ListOutpostsResult.h>
#include <aws/outposts/model/ListSitesRequest.h>
#include <aws/outposts/model/ListSitesResult.h>
#include <aws/outposts/model/ListTagsForResourceRequest.h>
#include <aws/outposts/model/ListTagsForResourceResult.h>
#include <aws/outposts/model/MaximumSupportedWeightLbs.h>
#include <aws/outposts/model/OpticalStandard.h>
#include <aws/outposts/model/Order.h>
#include <aws/outposts/model/OrderStatus.h>
#include <aws/outposts/model/OrderSummary.h>
#include <aws/outposts/model/OrderType.h>
#include <aws/outposts/model/Outpost.h>
#include <aws/outposts/model/PaymentOption.h>
#include <aws/outposts/model/PaymentTerm.h>
#include <aws/outposts/model/PowerConnector.h>
#include <aws/outposts/model/PowerDrawKva.h>
#include <aws/outposts/model/PowerFeedDrop.h>
#include <aws/outposts/model/PowerPhase.h>
#include <aws/outposts/model/RackPhysicalProperties.h>
#include <aws/outposts/model/ResourceType.h>
#include <aws/outposts/model/ShipmentCarrier.h>
#include <aws/outposts/model/ShipmentInformation.h>
#include <aws/outposts/model/Site.h>
#include <aws/outposts/model/StartCapacityTaskRequest.h>
#include <aws/outposts/model/StartCapacityTaskResult.h>
#include <aws/outposts/model/StartConnectionRequest.h>
#include <aws/outposts/model/StartConnectionResult.h>
#include <aws/outposts/model/SupportedHardwareType.h>
#include <aws/outposts/model/SupportedStorageEnum.h>
#include <aws/outposts/model/TagResourceRequest.h>
#include <aws/outposts/model/TagResourceResult.h>
#include <aws/outposts/model/TaskActionOnBlockingInstances.h>
#include <aws/outposts/model/UntagResourceRequest.h>
#include <aws/outposts/model/UntagResourceResult.h>
#include <aws/outposts/model/UpdateOutpostRequest.h>
#include <aws/outposts/model/UpdateOutpostResult.h>
#include <aws/outposts/model/UpdateSiteAddressRequest.h>
#include <aws/outposts/model/UpdateSiteAddressResult.h>
#include <aws/outposts/model/UpdateSiteRackPhysicalPropertiesRequest.h>
#include <aws/outposts/model/UpdateSiteRackPhysicalPropertiesResult.h>
#include <aws/outposts/model/UpdateSiteRequest.h>
#include <aws/outposts/model/UpdateSiteResult.h>
#include <aws/outposts/model/UplinkCount.h>
#include <aws/outposts/model/UplinkGbps.h>

using OutpostsIncludeTest = ::testing::Test;

TEST_F(OutpostsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Outposts::OutpostsClient>("OutpostsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
