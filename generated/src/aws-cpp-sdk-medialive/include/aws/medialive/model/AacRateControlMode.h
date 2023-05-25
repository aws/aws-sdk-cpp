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
  enum class AacRateControlMode
  {
    NOT_SET,
    CBR,
    VBR
  };

namespace AacRateControlModeMapper
{
AWS_MEDIALIVE_API AacRateControlMode GetAacRateControlModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAacRateControlMode(AacRateControlMode value);
} // namespace AacRateControlModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
