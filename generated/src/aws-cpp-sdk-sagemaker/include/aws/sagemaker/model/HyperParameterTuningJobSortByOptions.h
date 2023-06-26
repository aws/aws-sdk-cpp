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
  enum class HyperParameterTuningJobSortByOptions
  {
    NOT_SET,
    Name,
    Status,
    CreationTime
  };

namespace HyperParameterTuningJobSortByOptionsMapper
{
AWS_SAGEMAKER_API HyperParameterTuningJobSortByOptions GetHyperParameterTuningJobSortByOptionsForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForHyperParameterTuningJobSortByOptions(HyperParameterTuningJobSortByOptions value);
} // namespace HyperParameterTuningJobSortByOptionsMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
