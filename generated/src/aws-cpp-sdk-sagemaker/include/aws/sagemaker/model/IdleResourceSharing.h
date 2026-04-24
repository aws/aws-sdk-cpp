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
enum class IdleResourceSharing { NOT_SET, Enabled, Disabled };

namespace IdleResourceSharingMapper {
AWS_SAGEMAKER_API IdleResourceSharing GetIdleResourceSharingForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForIdleResourceSharing(IdleResourceSharing value);
}  // namespace IdleResourceSharingMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
