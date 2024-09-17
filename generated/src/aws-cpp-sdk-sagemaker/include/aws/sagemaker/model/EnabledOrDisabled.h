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
  enum class EnabledOrDisabled
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace EnabledOrDisabledMapper
{
AWS_SAGEMAKER_API EnabledOrDisabled GetEnabledOrDisabledForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForEnabledOrDisabled(EnabledOrDisabled value);
} // namespace EnabledOrDisabledMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
