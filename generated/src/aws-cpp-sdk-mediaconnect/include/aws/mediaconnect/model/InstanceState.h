/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class InstanceState
  {
    NOT_SET,
    REGISTERING,
    ACTIVE,
    DEREGISTERING,
    DEREGISTERED,
    REGISTRATION_ERROR,
    DEREGISTRATION_ERROR
  };

namespace InstanceStateMapper
{
AWS_MEDIACONNECT_API InstanceState GetInstanceStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForInstanceState(InstanceState value);
} // namespace InstanceStateMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
