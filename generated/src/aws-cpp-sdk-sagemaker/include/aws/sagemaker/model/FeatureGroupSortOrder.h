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
enum class FeatureGroupSortOrder { NOT_SET, Ascending, Descending };

namespace FeatureGroupSortOrderMapper {
AWS_SAGEMAKER_API FeatureGroupSortOrder GetFeatureGroupSortOrderForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForFeatureGroupSortOrder(FeatureGroupSortOrder value);
}  // namespace FeatureGroupSortOrderMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
