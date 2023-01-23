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
  enum class ExecutionRoleIdentityConfig
  {
    NOT_SET,
    USER_PROFILE_NAME,
    DISABLED
  };

namespace ExecutionRoleIdentityConfigMapper
{
AWS_SAGEMAKER_API ExecutionRoleIdentityConfig GetExecutionRoleIdentityConfigForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForExecutionRoleIdentityConfig(ExecutionRoleIdentityConfig value);
} // namespace ExecutionRoleIdentityConfigMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
