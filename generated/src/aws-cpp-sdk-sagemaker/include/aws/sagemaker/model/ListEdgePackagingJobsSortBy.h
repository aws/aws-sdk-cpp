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
enum class ListEdgePackagingJobsSortBy { NOT_SET, NAME, MODEL_NAME, CREATION_TIME, LAST_MODIFIED_TIME, STATUS };

namespace ListEdgePackagingJobsSortByMapper {
AWS_SAGEMAKER_API ListEdgePackagingJobsSortBy GetListEdgePackagingJobsSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForListEdgePackagingJobsSortBy(ListEdgePackagingJobsSortBy value);
}  // namespace ListEdgePackagingJobsSortByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
