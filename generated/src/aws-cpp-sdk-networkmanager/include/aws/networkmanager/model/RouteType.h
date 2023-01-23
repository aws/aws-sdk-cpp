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
  enum class RouteType
  {
    NOT_SET,
    PROPAGATED,
    STATIC_
  };

namespace RouteTypeMapper
{
AWS_NETWORKMANAGER_API RouteType GetRouteTypeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForRouteType(RouteType value);
} // namespace RouteTypeMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
