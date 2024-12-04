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
  enum class FairShare
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace FairShareMapper
{
AWS_SAGEMAKER_API FairShare GetFairShareForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForFairShare(FairShare value);
} // namespace FairShareMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
