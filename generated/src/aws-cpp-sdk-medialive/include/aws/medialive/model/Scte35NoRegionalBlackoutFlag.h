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
  enum class Scte35NoRegionalBlackoutFlag
  {
    NOT_SET,
    REGIONAL_BLACKOUT,
    NO_REGIONAL_BLACKOUT
  };

namespace Scte35NoRegionalBlackoutFlagMapper
{
AWS_MEDIALIVE_API Scte35NoRegionalBlackoutFlag GetScte35NoRegionalBlackoutFlagForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForScte35NoRegionalBlackoutFlag(Scte35NoRegionalBlackoutFlag value);
} // namespace Scte35NoRegionalBlackoutFlagMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
