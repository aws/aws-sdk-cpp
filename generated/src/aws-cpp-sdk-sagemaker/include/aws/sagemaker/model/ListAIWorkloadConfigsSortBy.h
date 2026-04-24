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
enum class ListAIWorkloadConfigsSortBy { NOT_SET, Name, CreationTime };

namespace ListAIWorkloadConfigsSortByMapper {
AWS_SAGEMAKER_API ListAIWorkloadConfigsSortBy GetListAIWorkloadConfigsSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForListAIWorkloadConfigsSortBy(ListAIWorkloadConfigsSortBy value);
}  // namespace ListAIWorkloadConfigsSortByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
