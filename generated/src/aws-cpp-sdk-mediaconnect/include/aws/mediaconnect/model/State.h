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
  enum class State
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace StateMapper
{
AWS_MEDIACONNECT_API State GetStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForState(State value);
} // namespace StateMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
