/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{
  enum class AutoScalingType
  {
    NOT_SET,
    load,
    timer
  };

namespace AutoScalingTypeMapper
{
AWS_OPSWORKS_API AutoScalingType GetAutoScalingTypeForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForAutoScalingType(AutoScalingType value);
} // namespace AutoScalingTypeMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
