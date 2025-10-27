/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class NotebookOutputOption { NOT_SET, Allowed, Disabled };

namespace NotebookOutputOptionMapper {
AWS_SAGEMAKER_API NotebookOutputOption GetNotebookOutputOptionForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForNotebookOutputOption(NotebookOutputOption value);
}  // namespace NotebookOutputOptionMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
