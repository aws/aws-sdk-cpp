/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class MonitoringAlertHistorySortKey { NOT_SET, CreationTime, Status };

namespace MonitoringAlertHistorySortKeyMapper {
AWS_SAGEMAKER_API MonitoringAlertHistorySortKey GetMonitoringAlertHistorySortKeyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForMonitoringAlertHistorySortKey(MonitoringAlertHistorySortKey value);
}  // namespace MonitoringAlertHistorySortKeyMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
