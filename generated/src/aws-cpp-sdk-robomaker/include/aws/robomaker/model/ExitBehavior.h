/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{
  enum class ExitBehavior
  {
    NOT_SET,
    FAIL,
    RESTART
  };

namespace ExitBehaviorMapper
{
AWS_ROBOMAKER_API ExitBehavior GetExitBehaviorForName(const Aws::String& name);

AWS_ROBOMAKER_API Aws::String GetNameForExitBehavior(ExitBehavior value);
} // namespace ExitBehaviorMapper
} // namespace Model
} // namespace RoboMaker
} // namespace Aws
