/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class SignalMapMonitorDeploymentStatus
  {
    NOT_SET,
    NOT_DEPLOYED,
    DRY_RUN_DEPLOYMENT_COMPLETE,
    DRY_RUN_DEPLOYMENT_FAILED,
    DRY_RUN_DEPLOYMENT_IN_PROGRESS,
    DEPLOYMENT_COMPLETE,
    DEPLOYMENT_FAILED,
    DEPLOYMENT_IN_PROGRESS,
    DELETE_COMPLETE,
    DELETE_FAILED,
    DELETE_IN_PROGRESS
  };

namespace SignalMapMonitorDeploymentStatusMapper
{
AWS_MEDIALIVE_API SignalMapMonitorDeploymentStatus GetSignalMapMonitorDeploymentStatusForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSignalMapMonitorDeploymentStatus(SignalMapMonitorDeploymentStatus value);
} // namespace SignalMapMonitorDeploymentStatusMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
