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
  enum class ConnectionStatus
  {
    NOT_SET,
    UP,
    DOWN
  };

namespace ConnectionStatusMapper
{
AWS_NETWORKMANAGER_API ConnectionStatus GetConnectionStatusForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForConnectionStatus(ConnectionStatus value);
} // namespace ConnectionStatusMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
