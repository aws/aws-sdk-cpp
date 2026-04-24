/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/SESV2_EXPORTS.h>

namespace Aws {
namespace SESV2 {
namespace Model {
enum class SuppressionConfidenceVerdictThreshold { NOT_SET, MEDIUM, HIGH, MANAGED };

namespace SuppressionConfidenceVerdictThresholdMapper {
AWS_SESV2_API SuppressionConfidenceVerdictThreshold GetSuppressionConfidenceVerdictThresholdForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForSuppressionConfidenceVerdictThreshold(SuppressionConfidenceVerdictThreshold value);
}  // namespace SuppressionConfidenceVerdictThresholdMapper
}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
