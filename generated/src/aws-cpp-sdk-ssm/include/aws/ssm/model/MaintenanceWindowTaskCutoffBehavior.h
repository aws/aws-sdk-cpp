/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class MaintenanceWindowTaskCutoffBehavior
  {
    NOT_SET,
    CONTINUE_TASK,
    CANCEL_TASK
  };

namespace MaintenanceWindowTaskCutoffBehaviorMapper
{
AWS_SSM_API MaintenanceWindowTaskCutoffBehavior GetMaintenanceWindowTaskCutoffBehaviorForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForMaintenanceWindowTaskCutoffBehavior(MaintenanceWindowTaskCutoffBehavior value);
} // namespace MaintenanceWindowTaskCutoffBehaviorMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
