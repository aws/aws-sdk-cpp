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
enum class MlflowAppStatus { NOT_SET, Creating, Created, CreateFailed, Updating, Updated, UpdateFailed, Deleting, DeleteFailed, Deleted };

namespace MlflowAppStatusMapper {
AWS_SAGEMAKER_API MlflowAppStatus GetMlflowAppStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForMlflowAppStatus(MlflowAppStatus value);
}  // namespace MlflowAppStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
