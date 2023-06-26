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
  enum class RStudioServerProAccessStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace RStudioServerProAccessStatusMapper
{
AWS_SAGEMAKER_API RStudioServerProAccessStatus GetRStudioServerProAccessStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRStudioServerProAccessStatus(RStudioServerProAccessStatus value);
} // namespace RStudioServerProAccessStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
