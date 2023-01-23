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
  enum class AppImageConfigSortKey
  {
    NOT_SET,
    CreationTime,
    LastModifiedTime,
    Name
  };

namespace AppImageConfigSortKeyMapper
{
AWS_SAGEMAKER_API AppImageConfigSortKey GetAppImageConfigSortKeyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAppImageConfigSortKey(AppImageConfigSortKey value);
} // namespace AppImageConfigSortKeyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
