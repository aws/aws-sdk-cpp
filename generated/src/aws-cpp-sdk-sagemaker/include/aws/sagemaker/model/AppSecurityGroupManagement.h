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
  enum class AppSecurityGroupManagement
  {
    NOT_SET,
    Service,
    Customer
  };

namespace AppSecurityGroupManagementMapper
{
AWS_SAGEMAKER_API AppSecurityGroupManagement GetAppSecurityGroupManagementForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAppSecurityGroupManagement(AppSecurityGroupManagement value);
} // namespace AppSecurityGroupManagementMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
