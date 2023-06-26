/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class AacVbrQuality
  {
    NOT_SET,
    HIGH,
    LOW,
    MEDIUM_HIGH,
    MEDIUM_LOW
  };

namespace AacVbrQualityMapper
{
AWS_MEDIALIVE_API AacVbrQuality GetAacVbrQualityForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAacVbrQuality(AacVbrQuality value);
} // namespace AacVbrQualityMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
