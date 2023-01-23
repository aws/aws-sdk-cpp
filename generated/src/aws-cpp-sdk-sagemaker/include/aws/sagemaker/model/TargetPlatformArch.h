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
  enum class TargetPlatformArch
  {
    NOT_SET,
    X86_64,
    X86,
    ARM64,
    ARM_EABI,
    ARM_EABIHF
  };

namespace TargetPlatformArchMapper
{
AWS_SAGEMAKER_API TargetPlatformArch GetTargetPlatformArchForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTargetPlatformArch(TargetPlatformArch value);
} // namespace TargetPlatformArchMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
