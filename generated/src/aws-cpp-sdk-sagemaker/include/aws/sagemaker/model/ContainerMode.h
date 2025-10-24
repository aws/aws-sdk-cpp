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
enum class ContainerMode { NOT_SET, SingleModel, MultiModel };

namespace ContainerModeMapper {
AWS_SAGEMAKER_API ContainerMode GetContainerModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForContainerMode(ContainerMode value);
}  // namespace ContainerModeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
