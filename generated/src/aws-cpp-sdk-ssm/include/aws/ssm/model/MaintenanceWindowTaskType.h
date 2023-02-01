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
  enum class MaintenanceWindowTaskType
  {
    NOT_SET,
    RUN_COMMAND,
    AUTOMATION,
    STEP_FUNCTIONS,
    LAMBDA
  };

namespace MaintenanceWindowTaskTypeMapper
{
AWS_SSM_API MaintenanceWindowTaskType GetMaintenanceWindowTaskTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForMaintenanceWindowTaskType(MaintenanceWindowTaskType value);
} // namespace MaintenanceWindowTaskTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
