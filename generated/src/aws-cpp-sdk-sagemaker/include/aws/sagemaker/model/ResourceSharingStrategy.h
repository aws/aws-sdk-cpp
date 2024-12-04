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
  enum class ResourceSharingStrategy
  {
    NOT_SET,
    Lend,
    DontLend,
    LendAndBorrow
  };

namespace ResourceSharingStrategyMapper
{
AWS_SAGEMAKER_API ResourceSharingStrategy GetResourceSharingStrategyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForResourceSharingStrategy(ResourceSharingStrategy value);
} // namespace ResourceSharingStrategyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
