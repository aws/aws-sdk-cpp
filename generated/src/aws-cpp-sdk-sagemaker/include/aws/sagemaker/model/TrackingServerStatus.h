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
  enum class TrackingServerStatus
  {
    NOT_SET,
    Creating,
    Created,
    CreateFailed,
    Updating,
    Updated,
    UpdateFailed,
    Deleting,
    DeleteFailed,
    Stopping,
    Stopped,
    StopFailed,
    Starting,
    Started,
    StartFailed,
    MaintenanceInProgress,
    MaintenanceComplete,
    MaintenanceFailed
  };

namespace TrackingServerStatusMapper
{
AWS_SAGEMAKER_API TrackingServerStatus GetTrackingServerStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTrackingServerStatus(TrackingServerStatus value);
} // namespace TrackingServerStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
