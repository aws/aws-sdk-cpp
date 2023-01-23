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
  enum class CandidateSortBy
  {
    NOT_SET,
    CreationTime,
    Status,
    FinalObjectiveMetricValue
  };

namespace CandidateSortByMapper
{
AWS_SAGEMAKER_API CandidateSortBy GetCandidateSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCandidateSortBy(CandidateSortBy value);
} // namespace CandidateSortByMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
