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
  enum class MaintenanceWindowExecutionStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    SUCCESS,
    FAILED,
    TIMED_OUT,
    CANCELLING,
    CANCELLED,
    SKIPPED_OVERLAPPING
  };

namespace MaintenanceWindowExecutionStatusMapper
{
AWS_SSM_API MaintenanceWindowExecutionStatus GetMaintenanceWindowExecutionStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForMaintenanceWindowExecutionStatus(MaintenanceWindowExecutionStatus value);
} // namespace MaintenanceWindowExecutionStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
