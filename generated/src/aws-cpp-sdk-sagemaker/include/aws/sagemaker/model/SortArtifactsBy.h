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
  enum class SortArtifactsBy
  {
    NOT_SET,
    CreationTime
  };

namespace SortArtifactsByMapper
{
AWS_SAGEMAKER_API SortArtifactsBy GetSortArtifactsByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortArtifactsBy(SortArtifactsBy value);
} // namespace SortArtifactsByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
