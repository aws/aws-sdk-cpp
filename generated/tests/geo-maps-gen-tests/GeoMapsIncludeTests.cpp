/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/geo-maps/GeoMapsClient.h>
#include <aws/geo-maps/GeoMapsEndpointProvider.h>
#include <aws/geo-maps/GeoMapsEndpointRules.h>
#include <aws/geo-maps/GeoMapsErrorMarshaller.h>
#include <aws/geo-maps/GeoMapsErrors.h>
#include <aws/geo-maps/GeoMapsRequest.h>
#include <aws/geo-maps/GeoMapsServiceClientModel.h>
#include <aws/geo-maps/GeoMaps_EXPORTS.h>
#include <aws/geo-maps/model/ColorScheme.h>
#include <aws/geo-maps/model/GetGlyphsRequest.h>
#include <aws/geo-maps/model/GetGlyphsResult.h>
#include <aws/geo-maps/model/GetSpritesRequest.h>
#include <aws/geo-maps/model/GetSpritesResult.h>
#include <aws/geo-maps/model/GetStaticMapRequest.h>
#include <aws/geo-maps/model/GetStaticMapResult.h>
#include <aws/geo-maps/model/GetStyleDescriptorRequest.h>
#include <aws/geo-maps/model/GetStyleDescriptorResult.h>
#include <aws/geo-maps/model/GetTileRequest.h>
#include <aws/geo-maps/model/GetTileResult.h>
#include <aws/geo-maps/model/LabelSize.h>
#include <aws/geo-maps/model/MapFeatureMode.h>
#include <aws/geo-maps/model/MapStyle.h>
#include <aws/geo-maps/model/ScaleBarUnit.h>
#include <aws/geo-maps/model/StaticMapStyle.h>
#include <aws/geo-maps/model/ValidationException.h>
#include <aws/geo-maps/model/ValidationExceptionField.h>
#include <aws/geo-maps/model/ValidationExceptionReason.h>
#include <aws/geo-maps/model/Variant.h>

using GeoMapsIncludeTest = ::testing::Test;

TEST_F(GeoMapsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::GeoMaps::GeoMapsClient>("GeoMapsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
