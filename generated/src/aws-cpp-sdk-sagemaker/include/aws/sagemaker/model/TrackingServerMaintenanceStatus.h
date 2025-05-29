/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class TrackingServerMaintenanceStatus
  {
    NOT_SET,
    MaintenanceInProgress,
    MaintenanceComplete,
    MaintenanceFailed
  };

namespace TrackingServerMaintenanceStatusMapper
{
AWS_SAGEMAKER_API TrackingServerMaintenanceStatus GetTrackingServerMaintenanceStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTrackingServerMaintenanceStatus(TrackingServerMaintenanceStatus value);
} // namespace TrackingServerMaintenanceStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
