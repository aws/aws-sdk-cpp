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
  enum class ModelPackageSortBy
  {
    NOT_SET,
    Name,
    CreationTime
  };

namespace ModelPackageSortByMapper
{
AWS_SAGEMAKER_API ModelPackageSortBy GetModelPackageSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelPackageSortBy(ModelPackageSortBy value);
} // namespace ModelPackageSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
