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
enum class AzureTelemetryType { NOT_SET, ResourceLogs, Metrics, FlowLogs };

namespace AzureTelemetryTypeMapper {
AWS_OBSERVABILITYADMIN_API AzureTelemetryType GetAzureTelemetryTypeForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForAzureTelemetryType(AzureTelemetryType value);
}  // namespace AzureTelemetryTypeMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
