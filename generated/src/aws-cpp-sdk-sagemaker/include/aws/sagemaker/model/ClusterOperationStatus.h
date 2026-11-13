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
enum class ClusterOperationStatus { NOT_SET, InProgress, Superseded, Done };

namespace ClusterOperationStatusMapper {
AWS_SAGEMAKER_API ClusterOperationStatus GetClusterOperationStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterOperationStatus(ClusterOperationStatus value);
}  // namespace ClusterOperationStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
