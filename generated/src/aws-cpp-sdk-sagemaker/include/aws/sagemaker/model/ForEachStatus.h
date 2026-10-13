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
enum class ForEachStatus { NOT_SET, Succeeded, Failed, Stopped };

namespace ForEachStatusMapper {
AWS_SAGEMAKER_API ForEachStatus GetForEachStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForForEachStatus(ForEachStatus value);
}  // namespace ForEachStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
