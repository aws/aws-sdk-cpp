/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{
  enum class AdMarkers
  {
    NOT_SET,
    NONE,
    SCTE35_ENHANCED,
    PASSTHROUGH
  };

namespace AdMarkersMapper
{
AWS_MEDIAPACKAGEVOD_API AdMarkers GetAdMarkersForName(const Aws::String& name);

AWS_MEDIAPACKAGEVOD_API Aws::String GetNameForAdMarkers(AdMarkers value);
} // namespace AdMarkersMapper
} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
