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
enum class AICapacityReservationPreference { NOT_SET, capacity_reservations_only };

namespace AICapacityReservationPreferenceMapper {
AWS_SAGEMAKER_API AICapacityReservationPreference GetAICapacityReservationPreferenceForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAICapacityReservationPreference(AICapacityReservationPreference value);
}  // namespace AICapacityReservationPreferenceMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
