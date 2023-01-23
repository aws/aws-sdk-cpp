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
  enum class DataDistributionType
  {
    NOT_SET,
    FullyReplicated,
    ShardedByS3Key
  };

namespace DataDistributionTypeMapper
{
AWS_SAGEMAKER_API DataDistributionType GetDataDistributionTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForDataDistributionType(DataDistributionType value);
} // namespace DataDistributionTypeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
