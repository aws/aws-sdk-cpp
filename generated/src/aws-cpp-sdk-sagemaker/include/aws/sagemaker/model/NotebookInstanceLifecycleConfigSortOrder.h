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
  enum class NotebookInstanceLifecycleConfigSortOrder
  {
    NOT_SET,
    Ascending,
    Descending
  };

namespace NotebookInstanceLifecycleConfigSortOrderMapper
{
AWS_SAGEMAKER_API NotebookInstanceLifecycleConfigSortOrder GetNotebookInstanceLifecycleConfigSortOrderForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForNotebookInstanceLifecycleConfigSortOrder(NotebookInstanceLifecycleConfigSortOrder value);
} // namespace NotebookInstanceLifecycleConfigSortOrderMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
