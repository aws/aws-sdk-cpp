/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/snowball/SnowballClient.h>
#include <aws/snowball/SnowballEndpointProvider.h>
#include <aws/snowball/SnowballEndpointRules.h>
#include <aws/snowball/SnowballErrorMarshaller.h>
#include <aws/snowball/SnowballErrors.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/snowball/SnowballServiceClientModel.h>
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/Address.h>
#include <aws/snowball/model/AddressType.h>
#include <aws/snowball/model/CancelClusterRequest.h>
#include <aws/snowball/model/CancelClusterResult.h>
#include <aws/snowball/model/CancelJobRequest.h>
#include <aws/snowball/model/CancelJobResult.h>
#include <aws/snowball/model/ClusterListEntry.h>
#include <aws/snowball/model/ClusterMetadata.h>
#include <aws/snowball/model/ClusterState.h>
#include <aws/snowball/model/CompatibleImage.h>
#include <aws/snowball/model/ConflictException.h>
#include <aws/snowball/model/CreateAddressRequest.h>
#include <aws/snowball/model/CreateAddressResult.h>
#include <aws/snowball/model/CreateClusterRequest.h>
#include <aws/snowball/model/CreateClusterResult.h>
#include <aws/snowball/model/CreateJobRequest.h>
#include <aws/snowball/model/CreateJobResult.h>
#include <aws/snowball/model/CreateLongTermPricingRequest.h>
#include <aws/snowball/model/CreateLongTermPricingResult.h>
#include <aws/snowball/model/CreateReturnShippingLabelRequest.h>
#include <aws/snowball/model/CreateReturnShippingLabelResult.h>
#include <aws/snowball/model/DataTransfer.h>
#include <aws/snowball/model/DependentService.h>
#include <aws/snowball/model/DescribeAddressRequest.h>
#include <aws/snowball/model/DescribeAddressResult.h>
#include <aws/snowball/model/DescribeAddressesRequest.h>
#include <aws/snowball/model/DescribeAddressesResult.h>
#include <aws/snowball/model/DescribeClusterRequest.h>
#include <aws/snowball/model/DescribeClusterResult.h>
#include <aws/snowball/model/DescribeJobRequest.h>
#include <aws/snowball/model/DescribeJobResult.h>
#include <aws/snowball/model/DescribeReturnShippingLabelRequest.h>
#include <aws/snowball/model/DescribeReturnShippingLabelResult.h>
#include <aws/snowball/model/DeviceConfiguration.h>
#include <aws/snowball/model/DeviceServiceName.h>
#include <aws/snowball/model/EKSOnDeviceServiceConfiguration.h>
#include <aws/snowball/model/Ec2AmiResource.h>
#include <aws/snowball/model/EventTriggerDefinition.h>
#include <aws/snowball/model/GetJobManifestRequest.h>
#include <aws/snowball/model/GetJobManifestResult.h>
#include <aws/snowball/model/GetJobUnlockCodeRequest.h>
#include <aws/snowball/model/GetJobUnlockCodeResult.h>
#include <aws/snowball/model/GetSnowballUsageRequest.h>
#include <aws/snowball/model/GetSnowballUsageResult.h>
#include <aws/snowball/model/GetSoftwareUpdatesRequest.h>
#include <aws/snowball/model/GetSoftwareUpdatesResult.h>
#include <aws/snowball/model/INDTaxDocuments.h>
#include <aws/snowball/model/ImpactLevel.h>
#include <aws/snowball/model/InvalidResourceException.h>
#include <aws/snowball/model/JobListEntry.h>
#include <aws/snowball/model/JobLogs.h>
#include <aws/snowball/model/JobMetadata.h>
#include <aws/snowball/model/JobResource.h>
#include <aws/snowball/model/JobState.h>
#include <aws/snowball/model/JobType.h>
#include <aws/snowball/model/KeyRange.h>
#include <aws/snowball/model/LambdaResource.h>
#include <aws/snowball/model/ListClusterJobsRequest.h>
#include <aws/snowball/model/ListClusterJobsResult.h>
#include <aws/snowball/model/ListClustersRequest.h>
#include <aws/snowball/model/ListClustersResult.h>
#include <aws/snowball/model/ListCompatibleImagesRequest.h>
#include <aws/snowball/model/ListCompatibleImagesResult.h>
#include <aws/snowball/model/ListJobsRequest.h>
#include <aws/snowball/model/ListJobsResult.h>
#include <aws/snowball/model/ListLongTermPricingRequest.h>
#include <aws/snowball/model/ListLongTermPricingResult.h>
#include <aws/snowball/model/ListPickupLocationsRequest.h>
#include <aws/snowball/model/ListPickupLocationsResult.h>
#include <aws/snowball/model/ListServiceVersionsRequest.h>
#include <aws/snowball/model/ListServiceVersionsResult.h>
#include <aws/snowball/model/LongTermPricingListEntry.h>
#include <aws/snowball/model/LongTermPricingType.h>
#include <aws/snowball/model/NFSOnDeviceServiceConfiguration.h>
#include <aws/snowball/model/Notification.h>
#include <aws/snowball/model/OnDeviceServiceConfiguration.h>
#include <aws/snowball/model/PickupDetails.h>
#include <aws/snowball/model/RemoteManagement.h>
#include <aws/snowball/model/S3OnDeviceServiceConfiguration.h>
#include <aws/snowball/model/S3Resource.h>
#include <aws/snowball/model/ServiceName.h>
#include <aws/snowball/model/ServiceVersion.h>
#include <aws/snowball/model/Shipment.h>
#include <aws/snowball/model/ShipmentState.h>
#include <aws/snowball/model/ShippingDetails.h>
#include <aws/snowball/model/ShippingLabelStatus.h>
#include <aws/snowball/model/ShippingOption.h>
#include <aws/snowball/model/SnowballCapacity.h>
#include <aws/snowball/model/SnowballType.h>
#include <aws/snowball/model/SnowconeDeviceConfiguration.h>
#include <aws/snowball/model/StorageUnit.h>
#include <aws/snowball/model/TGWOnDeviceServiceConfiguration.h>
#include <aws/snowball/model/TargetOnDeviceService.h>
#include <aws/snowball/model/TaxDocuments.h>
#include <aws/snowball/model/TransferOption.h>
#include <aws/snowball/model/UpdateClusterRequest.h>
#include <aws/snowball/model/UpdateClusterResult.h>
#include <aws/snowball/model/UpdateJobRequest.h>
#include <aws/snowball/model/UpdateJobResult.h>
#include <aws/snowball/model/UpdateJobShipmentStateRequest.h>
#include <aws/snowball/model/UpdateJobShipmentStateResult.h>
#include <aws/snowball/model/UpdateLongTermPricingRequest.h>
#include <aws/snowball/model/UpdateLongTermPricingResult.h>
#include <aws/snowball/model/WirelessConnection.h>

using SnowballIncludeTest = ::testing::Test;

TEST_F(SnowballIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Snowball::SnowballClient>("SnowballIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
