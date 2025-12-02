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
enum class MaintenanceStatus { NOT_SET, MaintenanceInProgress, MaintenanceComplete, MaintenanceFailed };

namespace MaintenanceStatusMapper {
AWS_SAGEMAKER_API MaintenanceStatus GetMaintenanceStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForMaintenanceStatus(MaintenanceStatus value);
}  // namespace MaintenanceStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
