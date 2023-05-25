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
  enum class StudioLifecycleConfigSortKey
  {
    NOT_SET,
    CreationTime,
    LastModifiedTime,
    Name
  };

namespace StudioLifecycleConfigSortKeyMapper
{
AWS_SAGEMAKER_API StudioLifecycleConfigSortKey GetStudioLifecycleConfigSortKeyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForStudioLifecycleConfigSortKey(StudioLifecycleConfigSortKey value);
} // namespace StudioLifecycleConfigSortKeyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
