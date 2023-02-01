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
  enum class InputDeviceScanType
  {
    NOT_SET,
    INTERLACED,
    PROGRESSIVE
  };

namespace InputDeviceScanTypeMapper
{
AWS_MEDIALIVE_API InputDeviceScanType GetInputDeviceScanTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputDeviceScanType(InputDeviceScanType value);
} // namespace InputDeviceScanTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
