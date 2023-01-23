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
  enum class StudioComponentState
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

namespace StudioComponentStateMapper
{
AWS_NIMBLESTUDIO_API StudioComponentState GetStudioComponentStateForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStudioComponentState(StudioComponentState value);
} // namespace StudioComponentStateMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
