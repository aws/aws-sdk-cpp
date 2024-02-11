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
  enum class Statistic
  {
    NOT_SET,
    Average,
    Minimum,
    Maximum,
    SampleCount,
    Sum
  };

namespace StatisticMapper
{
AWS_SAGEMAKER_API Statistic GetStatisticForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForStatistic(Statistic value);
} // namespace StatisticMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
