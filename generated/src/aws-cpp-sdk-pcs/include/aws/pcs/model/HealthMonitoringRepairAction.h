/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/PCS_EXPORTS.h>

namespace Aws {
namespace PCS {
namespace Model {
enum class HealthMonitoringRepairAction { NOT_SET, AUTO, REPLACE, ISOLATE, NONE };

namespace HealthMonitoringRepairActionMapper {
AWS_PCS_API HealthMonitoringRepairAction GetHealthMonitoringRepairActionForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForHealthMonitoringRepairAction(HealthMonitoringRepairAction value);
}  // namespace HealthMonitoringRepairActionMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
