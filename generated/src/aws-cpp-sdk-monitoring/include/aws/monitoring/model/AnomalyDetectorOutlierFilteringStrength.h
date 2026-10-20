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
enum class AnomalyDetectorOutlierFilteringStrength { NOT_SET, MINIMAL, MODERATE, STRICT };

namespace AnomalyDetectorOutlierFilteringStrengthMapper {
AWS_CLOUDWATCH_API AnomalyDetectorOutlierFilteringStrength GetAnomalyDetectorOutlierFilteringStrengthForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForAnomalyDetectorOutlierFilteringStrength(AnomalyDetectorOutlierFilteringStrength value);
}  // namespace AnomalyDetectorOutlierFilteringStrengthMapper
}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
