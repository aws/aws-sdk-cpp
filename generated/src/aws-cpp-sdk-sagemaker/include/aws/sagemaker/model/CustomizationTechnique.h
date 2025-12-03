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
enum class CustomizationTechnique { NOT_SET, SFT, DPO, RLVR, RLAIF };

namespace CustomizationTechniqueMapper {
AWS_SAGEMAKER_API CustomizationTechnique GetCustomizationTechniqueForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCustomizationTechnique(CustomizationTechnique value);
}  // namespace CustomizationTechniqueMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
