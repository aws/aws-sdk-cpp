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
  enum class ModelCardSortBy
  {
    NOT_SET,
    Name,
    CreationTime
  };

namespace ModelCardSortByMapper
{
AWS_SAGEMAKER_API ModelCardSortBy GetModelCardSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelCardSortBy(ModelCardSortBy value);
} // namespace ModelCardSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
