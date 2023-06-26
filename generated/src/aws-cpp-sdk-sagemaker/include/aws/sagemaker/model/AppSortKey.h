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
  enum class AppSortKey
  {
    NOT_SET,
    CreationTime
  };

namespace AppSortKeyMapper
{
AWS_SAGEMAKER_API AppSortKey GetAppSortKeyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAppSortKey(AppSortKey value);
} // namespace AppSortKeyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
