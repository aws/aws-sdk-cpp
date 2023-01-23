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
  enum class DirectInternetAccess
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace DirectInternetAccessMapper
{
AWS_SAGEMAKER_API DirectInternetAccess GetDirectInternetAccessForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForDirectInternetAccess(DirectInternetAccess value);
} // namespace DirectInternetAccessMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
