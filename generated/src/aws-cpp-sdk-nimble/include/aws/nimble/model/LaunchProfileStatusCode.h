/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{
  enum class LaunchProfileStatusCode
  {
    NOT_SET,
    LAUNCH_PROFILE_CREATED,
    LAUNCH_PROFILE_UPDATED,
    LAUNCH_PROFILE_DELETED,
    LAUNCH_PROFILE_CREATE_IN_PROGRESS,
    LAUNCH_PROFILE_UPDATE_IN_PROGRESS,
    LAUNCH_PROFILE_DELETE_IN_PROGRESS,
    INTERNAL_ERROR,
    STREAMING_IMAGE_NOT_FOUND,
    STREAMING_IMAGE_NOT_READY,
    LAUNCH_PROFILE_WITH_STREAM_SESSIONS_NOT_DELETED,
    ENCRYPTION_KEY_ACCESS_DENIED,
    ENCRYPTION_KEY_NOT_FOUND,
    INVALID_SUBNETS_PROVIDED,
    INVALID_INSTANCE_TYPES_PROVIDED,
    INVALID_SUBNETS_COMBINATION
  };

namespace LaunchProfileStatusCodeMapper
{
AWS_NIMBLESTUDIO_API LaunchProfileStatusCode GetLaunchProfileStatusCodeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForLaunchProfileStatusCode(LaunchProfileStatusCode value);
} // namespace LaunchProfileStatusCodeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
