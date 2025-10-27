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
enum class ImageVersionSortBy { NOT_SET, CREATION_TIME, LAST_MODIFIED_TIME, VERSION };

namespace ImageVersionSortByMapper {
AWS_SAGEMAKER_API ImageVersionSortBy GetImageVersionSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForImageVersionSortBy(ImageVersionSortBy value);
}  // namespace ImageVersionSortByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
