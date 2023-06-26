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
  enum class HyperParameterTuningAllocationStrategy
  {
    NOT_SET,
    Prioritized
  };

namespace HyperParameterTuningAllocationStrategyMapper
{
AWS_SAGEMAKER_API HyperParameterTuningAllocationStrategy GetHyperParameterTuningAllocationStrategyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForHyperParameterTuningAllocationStrategy(HyperParameterTuningAllocationStrategy value);
} // namespace HyperParameterTuningAllocationStrategyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
