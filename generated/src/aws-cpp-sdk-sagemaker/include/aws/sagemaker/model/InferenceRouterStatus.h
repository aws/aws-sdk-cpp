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
enum class InferenceRouterStatus { NOT_SET, InService, Creating, Updating, Failed, Deleting };

namespace InferenceRouterStatusMapper {
AWS_SAGEMAKER_API InferenceRouterStatus GetInferenceRouterStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForInferenceRouterStatus(InferenceRouterStatus value);
}  // namespace InferenceRouterStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
