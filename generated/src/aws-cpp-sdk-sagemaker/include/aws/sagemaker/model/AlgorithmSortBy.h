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
  enum class AlgorithmSortBy
  {
    NOT_SET,
    Name,
    CreationTime
  };

namespace AlgorithmSortByMapper
{
AWS_SAGEMAKER_API AlgorithmSortBy GetAlgorithmSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAlgorithmSortBy(AlgorithmSortBy value);
} // namespace AlgorithmSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
