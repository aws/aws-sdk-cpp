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
  enum class AutoMountHomeEFS
  {
    NOT_SET,
    Enabled,
    Disabled,
    DefaultAsDomain
  };

namespace AutoMountHomeEFSMapper
{
AWS_SAGEMAKER_API AutoMountHomeEFS GetAutoMountHomeEFSForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutoMountHomeEFS(AutoMountHomeEFS value);
} // namespace AutoMountHomeEFSMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
