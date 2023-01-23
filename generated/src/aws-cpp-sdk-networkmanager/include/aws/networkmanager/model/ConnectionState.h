/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class ConnectionState
  {
    NOT_SET,
    PENDING,
    AVAILABLE,
    DELETING,
    UPDATING
  };

namespace ConnectionStateMapper
{
AWS_NETWORKMANAGER_API ConnectionState GetConnectionStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForConnectionState(ConnectionState value);
} // namespace ConnectionStateMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
