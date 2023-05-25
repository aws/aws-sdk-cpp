/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pipes
{
namespace Model
{
  enum class LaunchType
  {
    NOT_SET,
    EC2,
    FARGATE,
    EXTERNAL
  };

namespace LaunchTypeMapper
{
AWS_PIPES_API LaunchType GetLaunchTypeForName(const Aws::String& name);

AWS_PIPES_API Aws::String GetNameForLaunchType(LaunchType value);
} // namespace LaunchTypeMapper
} // namespace Model
} // namespace Pipes
} // namespace Aws
