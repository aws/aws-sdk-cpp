/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class BridgePlacement
  {
    NOT_SET,
    AVAILABLE,
    LOCKED
  };

namespace BridgePlacementMapper
{
AWS_MEDIACONNECT_API BridgePlacement GetBridgePlacementForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForBridgePlacement(BridgePlacement value);
} // namespace BridgePlacementMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
