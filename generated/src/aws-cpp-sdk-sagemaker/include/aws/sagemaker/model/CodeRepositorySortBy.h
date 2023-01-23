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
  enum class CodeRepositorySortBy
  {
    NOT_SET,
    Name,
    CreationTime,
    LastModifiedTime
  };

namespace CodeRepositorySortByMapper
{
AWS_SAGEMAKER_API CodeRepositorySortBy GetCodeRepositorySortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCodeRepositorySortBy(CodeRepositorySortBy value);
} // namespace CodeRepositorySortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
