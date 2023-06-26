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
  enum class ProfilingStatus
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace ProfilingStatusMapper
{
AWS_SAGEMAKER_API ProfilingStatus GetProfilingStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForProfilingStatus(ProfilingStatus value);
} // namespace ProfilingStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
