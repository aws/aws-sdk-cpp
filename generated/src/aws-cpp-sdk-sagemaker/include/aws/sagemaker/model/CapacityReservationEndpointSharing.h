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
enum class CapacityReservationEndpointSharing { NOT_SET, SingleEndpoint, MultipleEndpoints };

namespace CapacityReservationEndpointSharingMapper {
AWS_SAGEMAKER_API CapacityReservationEndpointSharing GetCapacityReservationEndpointSharingForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCapacityReservationEndpointSharing(CapacityReservationEndpointSharing value);
}  // namespace CapacityReservationEndpointSharingMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
