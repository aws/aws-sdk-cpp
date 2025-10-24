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
enum class SpaceStatus { NOT_SET, Deleting, Failed, InService, Pending, Updating, Update_Failed, Delete_Failed };

namespace SpaceStatusMapper {
AWS_SAGEMAKER_API SpaceStatus GetSpaceStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSpaceStatus(SpaceStatus value);
}  // namespace SpaceStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
