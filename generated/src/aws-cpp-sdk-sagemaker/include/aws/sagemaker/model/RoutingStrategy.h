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
  enum class RoutingStrategy
  {
    NOT_SET,
    LEAST_OUTSTANDING_REQUESTS,
    RANDOM
  };

namespace RoutingStrategyMapper
{
AWS_SAGEMAKER_API RoutingStrategy GetRoutingStrategyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRoutingStrategy(RoutingStrategy value);
} // namespace RoutingStrategyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
