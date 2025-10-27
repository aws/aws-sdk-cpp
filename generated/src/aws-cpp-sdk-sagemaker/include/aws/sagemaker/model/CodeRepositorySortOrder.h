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
enum class CodeRepositorySortOrder { NOT_SET, Ascending, Descending };

namespace CodeRepositorySortOrderMapper {
AWS_SAGEMAKER_API CodeRepositorySortOrder GetCodeRepositorySortOrderForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCodeRepositorySortOrder(CodeRepositorySortOrder value);
}  // namespace CodeRepositorySortOrderMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
