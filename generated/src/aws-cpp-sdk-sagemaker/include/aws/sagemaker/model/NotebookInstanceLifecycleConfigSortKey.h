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
  enum class NotebookInstanceLifecycleConfigSortKey
  {
    NOT_SET,
    Name,
    CreationTime,
    LastModifiedTime
  };

namespace NotebookInstanceLifecycleConfigSortKeyMapper
{
AWS_SAGEMAKER_API NotebookInstanceLifecycleConfigSortKey GetNotebookInstanceLifecycleConfigSortKeyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForNotebookInstanceLifecycleConfigSortKey(NotebookInstanceLifecycleConfigSortKey value);
} // namespace NotebookInstanceLifecycleConfigSortKeyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
