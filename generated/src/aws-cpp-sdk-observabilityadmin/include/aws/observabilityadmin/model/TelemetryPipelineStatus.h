/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
enum class TelemetryPipelineStatus { NOT_SET, CREATING, ACTIVE, UPDATING, DELETING, CREATE_FAILED, UPDATE_FAILED };

namespace TelemetryPipelineStatusMapper {
AWS_OBSERVABILITYADMIN_API TelemetryPipelineStatus GetTelemetryPipelineStatusForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForTelemetryPipelineStatus(TelemetryPipelineStatus value);
}  // namespace TelemetryPipelineStatusMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
