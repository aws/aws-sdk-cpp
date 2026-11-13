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
enum class ClusterOperationSortBy { NOT_SET, CreationTime };

namespace ClusterOperationSortByMapper {
AWS_SAGEMAKER_API ClusterOperationSortBy GetClusterOperationSortByForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterOperationSortBy(ClusterOperationSortBy value);
}  // namespace ClusterOperationSortByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
