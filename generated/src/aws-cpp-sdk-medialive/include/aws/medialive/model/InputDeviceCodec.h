﻿/**
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
  enum class InputDeviceCodec
  {
    NOT_SET,
    HEVC,
    AVC
  };

namespace InputDeviceCodecMapper
{
AWS_MEDIALIVE_API InputDeviceCodec GetInputDeviceCodecForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputDeviceCodec(InputDeviceCodec value);
} // namespace InputDeviceCodecMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
