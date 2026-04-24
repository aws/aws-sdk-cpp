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
enum class SoftwareUpdateStatus { NOT_SET, Pending, InProgress, Succeeded, Failed, RollbackInProgress, RollbackComplete };

namespace SoftwareUpdateStatusMapper {
AWS_SAGEMAKER_API SoftwareUpdateStatus GetSoftwareUpdateStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForSoftwareUpdateStatus(SoftwareUpdateStatus value);
}  // namespace SoftwareUpdateStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
