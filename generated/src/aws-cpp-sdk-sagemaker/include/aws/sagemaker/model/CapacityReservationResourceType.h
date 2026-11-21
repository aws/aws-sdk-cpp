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
enum class CapacityReservationResourceType { NOT_SET, HyperPodClusters, Endpoints };

namespace CapacityReservationResourceTypeMapper {
AWS_SAGEMAKER_API CapacityReservationResourceType GetCapacityReservationResourceTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCapacityReservationResourceType(CapacityReservationResourceType value);
}  // namespace CapacityReservationResourceTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
