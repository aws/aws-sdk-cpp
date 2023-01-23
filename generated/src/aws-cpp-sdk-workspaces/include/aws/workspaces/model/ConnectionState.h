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
  enum class ConnectionState
  {
    NOT_SET,
    CONNECTED,
    DISCONNECTED,
    UNKNOWN
  };

namespace ConnectionStateMapper
{
AWS_WORKSPACES_API ConnectionState GetConnectionStateForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForConnectionState(ConnectionState value);
} // namespace ConnectionStateMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
