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
  enum class BatchStrategy
  {
    NOT_SET,
    MultiRecord,
    SingleRecord
  };

namespace BatchStrategyMapper
{
AWS_SAGEMAKER_API BatchStrategy GetBatchStrategyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForBatchStrategy(BatchStrategy value);
} // namespace BatchStrategyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
