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
enum class AvailabilityZoneBalanceEnforcementMode { NOT_SET, PERMISSIVE };

namespace AvailabilityZoneBalanceEnforcementModeMapper {
AWS_SAGEMAKER_API AvailabilityZoneBalanceEnforcementMode GetAvailabilityZoneBalanceEnforcementModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAvailabilityZoneBalanceEnforcementMode(AvailabilityZoneBalanceEnforcementMode value);
}  // namespace AvailabilityZoneBalanceEnforcementModeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
