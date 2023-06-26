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
  enum class InputDeviceConfiguredInput
  {
    NOT_SET,
    AUTO,
    HDMI,
    SDI
  };

namespace InputDeviceConfiguredInputMapper
{
AWS_MEDIALIVE_API InputDeviceConfiguredInput GetInputDeviceConfiguredInputForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputDeviceConfiguredInput(InputDeviceConfiguredInput value);
} // namespace InputDeviceConfiguredInputMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
