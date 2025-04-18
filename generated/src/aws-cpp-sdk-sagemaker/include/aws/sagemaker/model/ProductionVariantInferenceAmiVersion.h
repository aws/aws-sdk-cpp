/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class ProductionVariantInferenceAmiVersion
  {
    NOT_SET,
    al2_ami_sagemaker_inference_gpu_2,
    al2_ami_sagemaker_inference_gpu_2_1,
    al2_ami_sagemaker_inference_gpu_3_1,
    al2_ami_sagemaker_inference_neuron_2
  };

namespace ProductionVariantInferenceAmiVersionMapper
{
AWS_SAGEMAKER_API ProductionVariantInferenceAmiVersion GetProductionVariantInferenceAmiVersionForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProductionVariantInferenceAmiVersion(ProductionVariantInferenceAmiVersion value);
} // namespace ProductionVariantInferenceAmiVersionMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
