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
enum class ActivationState { NOT_SET, Enabled, Disabled };

namespace ActivationStateMapper {
AWS_SAGEMAKER_API ActivationState GetActivationStateForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForActivationState(ActivationState value);
}  // namespace ActivationStateMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
