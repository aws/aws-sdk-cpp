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
enum class CapacityReservationOptInStatus { NOT_SET, Pending, Active, Inactive };

namespace CapacityReservationOptInStatusMapper {
AWS_SAGEMAKER_API CapacityReservationOptInStatus GetCapacityReservationOptInStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCapacityReservationOptInStatus(CapacityReservationOptInStatus value);
}  // namespace CapacityReservationOptInStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
