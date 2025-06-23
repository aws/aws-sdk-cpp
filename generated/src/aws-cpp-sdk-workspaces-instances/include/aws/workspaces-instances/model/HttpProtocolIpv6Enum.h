/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{
  enum class HttpProtocolIpv6Enum
  {
    NOT_SET,
    enabled,
    disabled
  };

namespace HttpProtocolIpv6EnumMapper
{
AWS_WORKSPACESINSTANCES_API HttpProtocolIpv6Enum GetHttpProtocolIpv6EnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForHttpProtocolIpv6Enum(HttpProtocolIpv6Enum value);
} // namespace HttpProtocolIpv6EnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
