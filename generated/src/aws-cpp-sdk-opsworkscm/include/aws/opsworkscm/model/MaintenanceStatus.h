/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{
  enum class MaintenanceStatus
  {
    NOT_SET,
    SUCCESS,
    FAILED
  };

namespace MaintenanceStatusMapper
{
AWS_OPSWORKSCM_API MaintenanceStatus GetMaintenanceStatusForName(const Aws::String& name);

AWS_OPSWORKSCM_API Aws::String GetNameForMaintenanceStatus(MaintenanceStatus value);
} // namespace MaintenanceStatusMapper
} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
