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
  enum class LaunchProfileState
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    READY,
    UPDATE_IN_PROGRESS,
    DELETE_IN_PROGRESS,
    DELETED,
    DELETE_FAILED,
    CREATE_FAILED,
    UPDATE_FAILED
  };

namespace LaunchProfileStateMapper
{
AWS_NIMBLESTUDIO_API LaunchProfileState GetLaunchProfileStateForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForLaunchProfileState(LaunchProfileState value);
} // namespace LaunchProfileStateMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
