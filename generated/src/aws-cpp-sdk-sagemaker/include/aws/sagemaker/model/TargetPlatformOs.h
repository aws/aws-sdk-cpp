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
enum class TargetPlatformOs { NOT_SET, ANDROID_, LINUX };

namespace TargetPlatformOsMapper {
AWS_SAGEMAKER_API TargetPlatformOs GetTargetPlatformOsForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTargetPlatformOs(TargetPlatformOs value);
}  // namespace TargetPlatformOsMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
