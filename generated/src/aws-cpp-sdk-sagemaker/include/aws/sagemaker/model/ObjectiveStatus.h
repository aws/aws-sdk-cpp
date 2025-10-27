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
enum class ObjectiveStatus { NOT_SET, Succeeded, Pending, Failed };

namespace ObjectiveStatusMapper {
AWS_SAGEMAKER_API ObjectiveStatus GetObjectiveStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForObjectiveStatus(ObjectiveStatus value);
}  // namespace ObjectiveStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
