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
  enum class DesiredState
  {
    NOT_SET,
    ACTIVE,
    STANDBY,
    DELETED
  };

namespace DesiredStateMapper
{
AWS_MEDIACONNECT_API DesiredState GetDesiredStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForDesiredState(DesiredState value);
} // namespace DesiredStateMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
