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
  enum class AutoMLProcessingUnit
  {
    NOT_SET,
    CPU,
    GPU
  };

namespace AutoMLProcessingUnitMapper
{
AWS_SAGEMAKER_API AutoMLProcessingUnit GetAutoMLProcessingUnitForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutoMLProcessingUnit(AutoMLProcessingUnit value);
} // namespace AutoMLProcessingUnitMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
