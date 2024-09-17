/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class SessionConnectionState
  {
    NOT_SET,
    CONNECTED,
    NOT_CONNECTED
  };

namespace SessionConnectionStateMapper
{
AWS_WORKSPACES_API SessionConnectionState GetSessionConnectionStateForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForSessionConnectionState(SessionConnectionState value);
} // namespace SessionConnectionStateMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
