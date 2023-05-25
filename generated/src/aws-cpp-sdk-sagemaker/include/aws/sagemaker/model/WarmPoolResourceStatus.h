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
  enum class WarmPoolResourceStatus
  {
    NOT_SET,
    Available,
    Terminated,
    Reused,
    InUse
  };

namespace WarmPoolResourceStatusMapper
{
AWS_SAGEMAKER_API WarmPoolResourceStatus GetWarmPoolResourceStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForWarmPoolResourceStatus(WarmPoolResourceStatus value);
} // namespace WarmPoolResourceStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
