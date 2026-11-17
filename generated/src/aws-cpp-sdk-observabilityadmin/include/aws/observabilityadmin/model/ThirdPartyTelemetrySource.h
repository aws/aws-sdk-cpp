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
enum class ThirdPartyTelemetrySource { NOT_SET, Azure };

namespace ThirdPartyTelemetrySourceMapper {
AWS_OBSERVABILITYADMIN_API ThirdPartyTelemetrySource GetThirdPartyTelemetrySourceForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForThirdPartyTelemetrySource(ThirdPartyTelemetrySource value);
}  // namespace ThirdPartyTelemetrySourceMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
