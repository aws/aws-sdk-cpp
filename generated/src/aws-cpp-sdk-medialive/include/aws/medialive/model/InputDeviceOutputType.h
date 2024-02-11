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
  enum class InputDeviceOutputType
  {
    NOT_SET,
    NONE,
    MEDIALIVE_INPUT,
    MEDIACONNECT_FLOW
  };

namespace InputDeviceOutputTypeMapper
{
AWS_MEDIALIVE_API InputDeviceOutputType GetInputDeviceOutputTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputDeviceOutputType(InputDeviceOutputType value);
} // namespace InputDeviceOutputTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
