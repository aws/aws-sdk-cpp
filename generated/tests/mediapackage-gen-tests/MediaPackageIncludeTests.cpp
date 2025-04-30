/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/mediapackage/MediaPackageClient.h>
#include <aws/mediapackage/MediaPackageEndpointProvider.h>
#include <aws/mediapackage/MediaPackageEndpointRules.h>
#include <aws/mediapackage/MediaPackageErrorMarshaller.h>
#include <aws/mediapackage/MediaPackageErrors.h>
#include <aws/mediapackage/MediaPackageRequest.h>
#include <aws/mediapackage/MediaPackageServiceClientModel.h>
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/AdMarkers.h>
#include <aws/mediapackage/model/AdsOnDeliveryRestrictions.h>
#include <aws/mediapackage/model/Authorization.h>
#include <aws/mediapackage/model/Channel.h>
#include <aws/mediapackage/model/CmafEncryption.h>
#include <aws/mediapackage/model/CmafEncryptionMethod.h>
#include <aws/mediapackage/model/CmafPackage.h>
#include <aws/mediapackage/model/CmafPackageCreateOrUpdateParameters.h>
#include <aws/mediapackage/model/ConfigureLogsRequest.h>
#include <aws/mediapackage/model/ConfigureLogsResult.h>
#include <aws/mediapackage/model/CreateChannelRequest.h>
#include <aws/mediapackage/model/CreateChannelResult.h>
#include <aws/mediapackage/model/CreateHarvestJobRequest.h>
#include <aws/mediapackage/model/CreateHarvestJobResult.h>
#include <aws/mediapackage/model/CreateOriginEndpointRequest.h>
#include <aws/mediapackage/model/CreateOriginEndpointResult.h>
#include <aws/mediapackage/model/DashEncryption.h>
#include <aws/mediapackage/model/DashPackage.h>
#include <aws/mediapackage/model/DeleteChannelRequest.h>
#include <aws/mediapackage/model/DeleteChannelResult.h>
#include <aws/mediapackage/model/DeleteOriginEndpointRequest.h>
#include <aws/mediapackage/model/DeleteOriginEndpointResult.h>
#include <aws/mediapackage/model/DescribeChannelRequest.h>
#include <aws/mediapackage/model/DescribeChannelResult.h>
#include <aws/mediapackage/model/DescribeHarvestJobRequest.h>
#include <aws/mediapackage/model/DescribeHarvestJobResult.h>
#include <aws/mediapackage/model/DescribeOriginEndpointRequest.h>
#include <aws/mediapackage/model/DescribeOriginEndpointResult.h>
#include <aws/mediapackage/model/EgressAccessLogs.h>
#include <aws/mediapackage/model/EncryptionContractConfiguration.h>
#include <aws/mediapackage/model/EncryptionMethod.h>
#include <aws/mediapackage/model/HarvestJob.h>
#include <aws/mediapackage/model/HlsEncryption.h>
#include <aws/mediapackage/model/HlsIngest.h>
#include <aws/mediapackage/model/HlsManifest.h>
#include <aws/mediapackage/model/HlsManifestCreateOrUpdateParameters.h>
#include <aws/mediapackage/model/HlsPackage.h>
#include <aws/mediapackage/model/IngestEndpoint.h>
#include <aws/mediapackage/model/IngressAccessLogs.h>
#include <aws/mediapackage/model/ListChannelsRequest.h>
#include <aws/mediapackage/model/ListChannelsResult.h>
#include <aws/mediapackage/model/ListHarvestJobsRequest.h>
#include <aws/mediapackage/model/ListHarvestJobsResult.h>
#include <aws/mediapackage/model/ListOriginEndpointsRequest.h>
#include <aws/mediapackage/model/ListOriginEndpointsResult.h>
#include <aws/mediapackage/model/ListTagsForResourceRequest.h>
#include <aws/mediapackage/model/ListTagsForResourceResult.h>
#include <aws/mediapackage/model/ManifestLayout.h>
#include <aws/mediapackage/model/MssEncryption.h>
#include <aws/mediapackage/model/MssPackage.h>
#include <aws/mediapackage/model/OriginEndpoint.h>
#include <aws/mediapackage/model/Origination.h>
#include <aws/mediapackage/model/PlaylistType.h>
#include <aws/mediapackage/model/PresetSpeke20Audio.h>
#include <aws/mediapackage/model/PresetSpeke20Video.h>
#include <aws/mediapackage/model/Profile.h>
#include <aws/mediapackage/model/RotateIngestEndpointCredentialsRequest.h>
#include <aws/mediapackage/model/RotateIngestEndpointCredentialsResult.h>
#include <aws/mediapackage/model/S3Destination.h>
#include <aws/mediapackage/model/SegmentTemplateFormat.h>
#include <aws/mediapackage/model/SpekeKeyProvider.h>
#include <aws/mediapackage/model/Status.h>
#include <aws/mediapackage/model/StreamOrder.h>
#include <aws/mediapackage/model/StreamSelection.h>
#include <aws/mediapackage/model/TagResourceRequest.h>
#include <aws/mediapackage/model/UntagResourceRequest.h>
#include <aws/mediapackage/model/UpdateChannelRequest.h>
#include <aws/mediapackage/model/UpdateChannelResult.h>
#include <aws/mediapackage/model/UpdateOriginEndpointRequest.h>
#include <aws/mediapackage/model/UpdateOriginEndpointResult.h>
#include <aws/mediapackage/model/UtcTiming.h>
#include <aws/mediapackage/model/__AdTriggersElement.h>
#include <aws/mediapackage/model/__PeriodTriggersElement.h>

using MediaPackageIncludeTest = ::testing::Test;

TEST_F(MediaPackageIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MediaPackage::MediaPackageClient>("MediaPackageIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
