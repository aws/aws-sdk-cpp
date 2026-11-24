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
enum class GlobalInferenceGatewayStatus { NOT_SET, CREATING, ACTIVE, UPDATING, DELETING, FAILED };

namespace GlobalInferenceGatewayStatusMapper {
AWS_SAGEMAKER_API GlobalInferenceGatewayStatus GetGlobalInferenceGatewayStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForGlobalInferenceGatewayStatus(GlobalInferenceGatewayStatus value);
}  // namespace GlobalInferenceGatewayStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
