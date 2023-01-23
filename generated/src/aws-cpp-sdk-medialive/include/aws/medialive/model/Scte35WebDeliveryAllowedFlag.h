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
  enum class Scte35WebDeliveryAllowedFlag
  {
    NOT_SET,
    WEB_DELIVERY_NOT_ALLOWED,
    WEB_DELIVERY_ALLOWED
  };

namespace Scte35WebDeliveryAllowedFlagMapper
{
AWS_MEDIALIVE_API Scte35WebDeliveryAllowedFlag GetScte35WebDeliveryAllowedFlagForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForScte35WebDeliveryAllowedFlag(Scte35WebDeliveryAllowedFlag value);
} // namespace Scte35WebDeliveryAllowedFlagMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
