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
  enum class Processor
  {
    NOT_SET,
    CPU,
    GPU
  };

namespace ProcessorMapper
{
AWS_SAGEMAKER_API Processor GetProcessorForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProcessor(Processor value);
} // namespace ProcessorMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
