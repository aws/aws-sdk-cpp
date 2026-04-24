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
enum class SortBy { NOT_SET, Name, CreationTime, Status };

namespace SortByMapper {
AWS_SAGEMAKER_API SortBy GetSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortBy(SortBy value);
}  // namespace SortByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
