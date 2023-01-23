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
  enum class H265Tier
  {
    NOT_SET,
    HIGH,
    MAIN
  };

namespace H265TierMapper
{
AWS_MEDIALIVE_API H265Tier GetH265TierForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265Tier(H265Tier value);
} // namespace H265TierMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
