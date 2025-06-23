/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{
  enum class InstanceInterruptionBehaviorEnum
  {
    NOT_SET,
    hibernate,
    stop
  };

namespace InstanceInterruptionBehaviorEnumMapper
{
AWS_WORKSPACESINSTANCES_API InstanceInterruptionBehaviorEnum GetInstanceInterruptionBehaviorEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForInstanceInterruptionBehaviorEnum(InstanceInterruptionBehaviorEnum value);
} // namespace InstanceInterruptionBehaviorEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
