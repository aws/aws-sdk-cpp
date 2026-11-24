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
enum class GlobalInferenceGatewayFilterName { NOT_SET, Status };

namespace GlobalInferenceGatewayFilterNameMapper {
AWS_SAGEMAKER_API GlobalInferenceGatewayFilterName GetGlobalInferenceGatewayFilterNameForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForGlobalInferenceGatewayFilterName(GlobalInferenceGatewayFilterName value);
}  // namespace GlobalInferenceGatewayFilterNameMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
