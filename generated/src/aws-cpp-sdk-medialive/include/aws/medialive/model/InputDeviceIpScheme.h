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
  enum class InputDeviceIpScheme
  {
    NOT_SET,
    STATIC_,
    DHCP
  };

namespace InputDeviceIpSchemeMapper
{
AWS_MEDIALIVE_API InputDeviceIpScheme GetInputDeviceIpSchemeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputDeviceIpScheme(InputDeviceIpScheme value);
} // namespace InputDeviceIpSchemeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
