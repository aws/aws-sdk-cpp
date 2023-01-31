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
  enum class CompleteOnConvergence
  {
    NOT_SET,
    Disabled,
    Enabled
  };

namespace CompleteOnConvergenceMapper
{
AWS_SAGEMAKER_API CompleteOnConvergence GetCompleteOnConvergenceForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCompleteOnConvergence(CompleteOnConvergence value);
} // namespace CompleteOnConvergenceMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
