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
  enum class RouteState
  {
    NOT_SET,
    ACTIVE,
    BLACKHOLE
  };

namespace RouteStateMapper
{
AWS_NETWORKMANAGER_API RouteState GetRouteStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForRouteState(RouteState value);
} // namespace RouteStateMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
