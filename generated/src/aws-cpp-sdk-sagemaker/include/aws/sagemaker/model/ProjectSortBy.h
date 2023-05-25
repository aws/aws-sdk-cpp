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
  enum class ProjectSortBy
  {
    NOT_SET,
    Name,
    CreationTime
  };

namespace ProjectSortByMapper
{
AWS_SAGEMAKER_API ProjectSortBy GetProjectSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProjectSortBy(ProjectSortBy value);
} // namespace ProjectSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
