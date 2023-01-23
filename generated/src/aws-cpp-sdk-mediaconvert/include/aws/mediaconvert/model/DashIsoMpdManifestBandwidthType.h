/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class DashIsoMpdManifestBandwidthType
  {
    NOT_SET,
    AVERAGE,
    MAX
  };

namespace DashIsoMpdManifestBandwidthTypeMapper
{
AWS_MEDIACONVERT_API DashIsoMpdManifestBandwidthType GetDashIsoMpdManifestBandwidthTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDashIsoMpdManifestBandwidthType(DashIsoMpdManifestBandwidthType value);
} // namespace DashIsoMpdManifestBandwidthTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
