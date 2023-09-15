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
  enum class SkipModelValidation
  {
    NOT_SET,
    All,
    None
  };

namespace SkipModelValidationMapper
{
AWS_SAGEMAKER_API SkipModelValidation GetSkipModelValidationForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSkipModelValidation(SkipModelValidation value);
} // namespace SkipModelValidationMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
