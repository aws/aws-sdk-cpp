/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{
  enum class ResourceManagedType
  {
    NOT_SET,
    AWS_MANAGED_THREAT_SIGNATURES,
    AWS_MANAGED_DOMAIN_LISTS
  };

namespace ResourceManagedTypeMapper
{
AWS_NETWORKFIREWALL_API ResourceManagedType GetResourceManagedTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForResourceManagedType(ResourceManagedType value);
} // namespace ResourceManagedTypeMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
