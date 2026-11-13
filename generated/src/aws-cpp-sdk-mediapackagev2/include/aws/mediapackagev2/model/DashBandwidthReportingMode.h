/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>

namespace Aws {
namespace mediapackagev2 {
namespace Model {
enum class DashBandwidthReportingMode { NOT_SET, AVERAGE, MAX };

namespace DashBandwidthReportingModeMapper {
AWS_MEDIAPACKAGEV2_API DashBandwidthReportingMode GetDashBandwidthReportingModeForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForDashBandwidthReportingMode(DashBandwidthReportingMode value);
}  // namespace DashBandwidthReportingModeMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
