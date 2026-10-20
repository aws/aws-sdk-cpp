/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

namespace Aws {
namespace CloudWatch {
namespace Model {
enum class AnomalyDetectorAdaptationSpeed { NOT_SET, FAST, NORMAL, SLOW };

namespace AnomalyDetectorAdaptationSpeedMapper {
AWS_CLOUDWATCH_API AnomalyDetectorAdaptationSpeed GetAnomalyDetectorAdaptationSpeedForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForAnomalyDetectorAdaptationSpeed(AnomalyDetectorAdaptationSpeed value);
}  // namespace AnomalyDetectorAdaptationSpeedMapper
}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
