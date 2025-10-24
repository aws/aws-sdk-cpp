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
enum class SortLineageGroupsBy { NOT_SET, Name, CreationTime };

namespace SortLineageGroupsByMapper {
AWS_SAGEMAKER_API SortLineageGroupsBy GetSortLineageGroupsByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSortLineageGroupsBy(SortLineageGroupsBy value);
}  // namespace SortLineageGroupsByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
