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
enum class CapacityReservationMatchCriteria { NOT_SET, Open, Targeted };

namespace CapacityReservationMatchCriteriaMapper {
AWS_SAGEMAKER_API CapacityReservationMatchCriteria GetCapacityReservationMatchCriteriaForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCapacityReservationMatchCriteria(CapacityReservationMatchCriteria value);
}  // namespace CapacityReservationMatchCriteriaMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
