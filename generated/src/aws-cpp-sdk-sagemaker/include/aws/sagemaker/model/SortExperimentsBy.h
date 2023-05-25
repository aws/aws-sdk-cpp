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
  enum class SortExperimentsBy
  {
    NOT_SET,
    Name,
    CreationTime
  };

namespace SortExperimentsByMapper
{
AWS_SAGEMAKER_API SortExperimentsBy GetSortExperimentsByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortExperimentsBy(SortExperimentsBy value);
} // namespace SortExperimentsByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
