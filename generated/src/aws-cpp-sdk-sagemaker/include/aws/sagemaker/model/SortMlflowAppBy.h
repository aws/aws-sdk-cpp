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
enum class SortMlflowAppBy { NOT_SET, Name, CreationTime, Status };

namespace SortMlflowAppByMapper {
AWS_SAGEMAKER_API SortMlflowAppBy GetSortMlflowAppByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortMlflowAppBy(SortMlflowAppBy value);
}  // namespace SortMlflowAppByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
