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
  enum class LifecycleManagement
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace LifecycleManagementMapper
{
AWS_SAGEMAKER_API LifecycleManagement GetLifecycleManagementForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForLifecycleManagement(LifecycleManagement value);
} // namespace LifecycleManagementMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
