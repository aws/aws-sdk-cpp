/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{
  enum class AdMarkers
  {
    NOT_SET,
    NONE,
    SCTE35_ENHANCED,
    PASSTHROUGH,
    DATERANGE
  };

namespace AdMarkersMapper
{
AWS_MEDIAPACKAGE_API AdMarkers GetAdMarkersForName(const Aws::String& name);

AWS_MEDIAPACKAGE_API Aws::String GetNameForAdMarkers(AdMarkers value);
} // namespace AdMarkersMapper
} // namespace Model
} // namespace MediaPackage
} // namespace Aws
