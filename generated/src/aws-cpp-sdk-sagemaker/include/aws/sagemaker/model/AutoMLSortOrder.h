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
  enum class AutoMLSortOrder
  {
    NOT_SET,
    Ascending,
    Descending
  };

namespace AutoMLSortOrderMapper
{
AWS_SAGEMAKER_API AutoMLSortOrder GetAutoMLSortOrderForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutoMLSortOrder(AutoMLSortOrder value);
} // namespace AutoMLSortOrderMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
