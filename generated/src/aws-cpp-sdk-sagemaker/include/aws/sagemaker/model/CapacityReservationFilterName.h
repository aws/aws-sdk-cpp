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
enum class CapacityReservationFilterName { NOT_SET, Status };

namespace CapacityReservationFilterNameMapper {
AWS_SAGEMAKER_API CapacityReservationFilterName GetCapacityReservationFilterNameForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCapacityReservationFilterName(CapacityReservationFilterName value);
}  // namespace CapacityReservationFilterNameMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
