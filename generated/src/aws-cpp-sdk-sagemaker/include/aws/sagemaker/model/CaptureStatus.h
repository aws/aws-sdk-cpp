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
  enum class CaptureStatus
  {
    NOT_SET,
    Started,
    Stopped
  };

namespace CaptureStatusMapper
{
AWS_SAGEMAKER_API CaptureStatus GetCaptureStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCaptureStatus(CaptureStatus value);
} // namespace CaptureStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
