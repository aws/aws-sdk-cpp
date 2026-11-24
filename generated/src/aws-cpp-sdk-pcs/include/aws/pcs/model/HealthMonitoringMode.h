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
enum class HealthMonitoringMode { NOT_SET, NONE, STANDARD };

namespace HealthMonitoringModeMapper {
AWS_PCS_API HealthMonitoringMode GetHealthMonitoringModeForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForHealthMonitoringMode(HealthMonitoringMode value);
}  // namespace HealthMonitoringModeMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
