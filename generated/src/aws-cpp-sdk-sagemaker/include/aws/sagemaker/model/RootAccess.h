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
  enum class RootAccess
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace RootAccessMapper
{
AWS_SAGEMAKER_API RootAccess GetRootAccessForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForRootAccess(RootAccess value);
} // namespace RootAccessMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
