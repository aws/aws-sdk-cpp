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
  enum class Scte35AposWebDeliveryAllowedBehavior
  {
    NOT_SET,
    FOLLOW,
    IGNORE
  };

namespace Scte35AposWebDeliveryAllowedBehaviorMapper
{
AWS_MEDIALIVE_API Scte35AposWebDeliveryAllowedBehavior GetScte35AposWebDeliveryAllowedBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForScte35AposWebDeliveryAllowedBehavior(Scte35AposWebDeliveryAllowedBehavior value);
} // namespace Scte35AposWebDeliveryAllowedBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
