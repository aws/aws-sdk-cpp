﻿/**
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
  enum class AacCodecProfile
  {
    NOT_SET,
    LC,
    HEV1,
    HEV2,
    XHE
  };

namespace AacCodecProfileMapper
{
AWS_MEDIACONVERT_API AacCodecProfile GetAacCodecProfileForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAacCodecProfile(AacCodecProfile value);
} // namespace AacCodecProfileMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
