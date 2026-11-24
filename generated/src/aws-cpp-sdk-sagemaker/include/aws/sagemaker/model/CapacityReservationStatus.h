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
enum class CapacityReservationStatus { NOT_SET, Scheduled, Active, Expired };

namespace CapacityReservationStatusMapper {
AWS_SAGEMAKER_API CapacityReservationStatus GetCapacityReservationStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCapacityReservationStatus(CapacityReservationStatus value);
}  // namespace CapacityReservationStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
