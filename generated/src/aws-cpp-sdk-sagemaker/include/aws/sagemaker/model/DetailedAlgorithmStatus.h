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
  enum class DetailedAlgorithmStatus
  {
    NOT_SET,
    NotStarted,
    InProgress,
    Completed,
    Failed
  };

namespace DetailedAlgorithmStatusMapper
{
AWS_SAGEMAKER_API DetailedAlgorithmStatus GetDetailedAlgorithmStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForDetailedAlgorithmStatus(DetailedAlgorithmStatus value);
} // namespace DetailedAlgorithmStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
