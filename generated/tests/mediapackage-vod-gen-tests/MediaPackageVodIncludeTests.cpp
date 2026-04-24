/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/mediapackage-vod/MediaPackageVodClient.h>
#include <aws/mediapackage-vod/MediaPackageVodEndpointProvider.h>
#include <aws/mediapackage-vod/MediaPackageVodEndpointRules.h>
#include <aws/mediapackage-vod/MediaPackageVodErrorMarshaller.h>
#include <aws/mediapackage-vod/MediaPackageVodErrors.h>
#include <aws/mediapackage-vod/MediaPackageVodRequest.h>
#include <aws/mediapackage-vod/MediaPackageVodServiceClientModel.h>
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/AdMarkers.h>
#include <aws/mediapackage-vod/model/AssetShallow.h>
#include <aws/mediapackage-vod/model/Authorization.h>
#include <aws/mediapackage-vod/model/CmafEncryption.h>
#include <aws/mediapackage-vod/model/CmafPackage.h>
#include <aws/mediapackage-vod/model/ConfigureLogsRequest.h>
#include <aws/mediapackage-vod/model/ConfigureLogsResult.h>
#include <aws/mediapackage-vod/model/CreateAssetRequest.h>
#include <aws/mediapackage-vod/model/CreateAssetResult.h>
#include <aws/mediapackage-vod/model/CreatePackagingConfigurationRequest.h>
#include <aws/mediapackage-vod/model/CreatePackagingConfigurationResult.h>
#include <aws/mediapackage-vod/model/CreatePackagingGroupRequest.h>
#include <aws/mediapackage-vod/model/CreatePackagingGroupResult.h>
#include <aws/mediapackage-vod/model/DashEncryption.h>
#include <aws/mediapackage-vod/model/DashManifest.h>
#include <aws/mediapackage-vod/model/DashPackage.h>
#include <aws/mediapackage-vod/model/DeleteAssetRequest.h>
#include <aws/mediapackage-vod/model/DeleteAssetResult.h>
#include <aws/mediapackage-vod/model/DeletePackagingConfigurationRequest.h>
#include <aws/mediapackage-vod/model/DeletePackagingConfigurationResult.h>
#include <aws/mediapackage-vod/model/DeletePackagingGroupRequest.h>
#include <aws/mediapackage-vod/model/DeletePackagingGroupResult.h>
#include <aws/mediapackage-vod/model/DescribeAssetRequest.h>
#include <aws/mediapackage-vod/model/DescribeAssetResult.h>
#include <aws/mediapackage-vod/model/DescribePackagingConfigurationRequest.h>
#include <aws/mediapackage-vod/model/DescribePackagingConfigurationResult.h>
#include <aws/mediapackage-vod/model/DescribePackagingGroupRequest.h>
#include <aws/mediapackage-vod/model/DescribePackagingGroupResult.h>
#include <aws/mediapackage-vod/model/EgressAccessLogs.h>
#include <aws/mediapackage-vod/model/EgressEndpoint.h>
#include <aws/mediapackage-vod/model/EncryptionContractConfiguration.h>
#include <aws/mediapackage-vod/model/EncryptionMethod.h>
#include <aws/mediapackage-vod/model/HlsEncryption.h>
#include <aws/mediapackage-vod/model/HlsManifest.h>
#include <aws/mediapackage-vod/model/HlsPackage.h>
#include <aws/mediapackage-vod/model/ListAssetsRequest.h>
#include <aws/mediapackage-vod/model/ListAssetsResult.h>
#include <aws/mediapackage-vod/model/ListPackagingConfigurationsRequest.h>
#include <aws/mediapackage-vod/model/ListPackagingConfigurationsResult.h>
#include <aws/mediapackage-vod/model/ListPackagingGroupsRequest.h>
#include <aws/mediapackage-vod/model/ListPackagingGroupsResult.h>
#include <aws/mediapackage-vod/model/ListTagsForResourceRequest.h>
#include <aws/mediapackage-vod/model/ListTagsForResourceResult.h>
#include <aws/mediapackage-vod/model/ManifestLayout.h>
#include <aws/mediapackage-vod/model/MssEncryption.h>
#include <aws/mediapackage-vod/model/MssManifest.h>
#include <aws/mediapackage-vod/model/MssPackage.h>
#include <aws/mediapackage-vod/model/PackagingConfiguration.h>
#include <aws/mediapackage-vod/model/PackagingGroup.h>
#include <aws/mediapackage-vod/model/PresetSpeke20Audio.h>
#include <aws/mediapackage-vod/model/PresetSpeke20Video.h>
#include <aws/mediapackage-vod/model/Profile.h>
#include <aws/mediapackage-vod/model/ScteMarkersSource.h>
#include <aws/mediapackage-vod/model/SegmentTemplateFormat.h>
#include <aws/mediapackage-vod/model/SpekeKeyProvider.h>
#include <aws/mediapackage-vod/model/StreamOrder.h>
#include <aws/mediapackage-vod/model/StreamSelection.h>
#include <aws/mediapackage-vod/model/TagResourceRequest.h>
#include <aws/mediapackage-vod/model/UntagResourceRequest.h>
#include <aws/mediapackage-vod/model/UpdatePackagingGroupRequest.h>
#include <aws/mediapackage-vod/model/UpdatePackagingGroupResult.h>
#include <aws/mediapackage-vod/model/__PeriodTriggersElement.h>

using MediaPackageVodIncludeTest = ::testing::Test;

TEST_F(MediaPackageVodIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MediaPackageVod::MediaPackageVodClient>("MediaPackageVodIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
