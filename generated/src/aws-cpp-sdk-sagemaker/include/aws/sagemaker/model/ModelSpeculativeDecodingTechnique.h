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
enum class ModelSpeculativeDecodingTechnique { NOT_SET, EAGLE };

namespace ModelSpeculativeDecodingTechniqueMapper {
AWS_SAGEMAKER_API ModelSpeculativeDecodingTechnique GetModelSpeculativeDecodingTechniqueForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelSpeculativeDecodingTechnique(ModelSpeculativeDecodingTechnique value);
}  // namespace ModelSpeculativeDecodingTechniqueMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
