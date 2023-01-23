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
  enum class ModelVariantAction
  {
    NOT_SET,
    Retain,
    Remove,
    Promote
  };

namespace ModelVariantActionMapper
{
AWS_SAGEMAKER_API ModelVariantAction GetModelVariantActionForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelVariantAction(ModelVariantAction value);
} // namespace ModelVariantActionMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
