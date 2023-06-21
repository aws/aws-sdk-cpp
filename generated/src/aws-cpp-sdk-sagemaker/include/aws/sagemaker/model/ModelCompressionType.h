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
  enum class ModelCompressionType
  {
    NOT_SET,
    None,
    Gzip
  };

namespace ModelCompressionTypeMapper
{
AWS_SAGEMAKER_API ModelCompressionType GetModelCompressionTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelCompressionType(ModelCompressionType value);
} // namespace ModelCompressionTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
