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
  enum class AutotuneMode
  {
    NOT_SET,
    Enabled
  };

namespace AutotuneModeMapper
{
AWS_SAGEMAKER_API AutotuneMode GetAutotuneModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutotuneMode(AutotuneMode value);
} // namespace AutotuneModeMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
