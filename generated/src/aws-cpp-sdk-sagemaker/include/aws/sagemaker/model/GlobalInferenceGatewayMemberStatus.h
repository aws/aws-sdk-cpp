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
enum class GlobalInferenceGatewayMemberStatus { NOT_SET, ADDING, ACTIVE, REMOVING, FAILED };

namespace GlobalInferenceGatewayMemberStatusMapper {
AWS_SAGEMAKER_API GlobalInferenceGatewayMemberStatus GetGlobalInferenceGatewayMemberStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForGlobalInferenceGatewayMemberStatus(GlobalInferenceGatewayMemberStatus value);
}  // namespace GlobalInferenceGatewayMemberStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
