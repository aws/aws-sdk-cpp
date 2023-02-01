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
  enum class RebootInputDeviceForce
  {
    NOT_SET,
    NO,
    YES
  };

namespace RebootInputDeviceForceMapper
{
AWS_MEDIALIVE_API RebootInputDeviceForce GetRebootInputDeviceForceForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForRebootInputDeviceForce(RebootInputDeviceForce value);
} // namespace RebootInputDeviceForceMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
