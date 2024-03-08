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
  enum class IdentifiedType
  {
    NOT_SET,
    STATELESS_RULE_FORWARDING_ASYMMETRICALLY,
    STATELESS_RULE_CONTAINS_TCP_FLAGS
  };

namespace IdentifiedTypeMapper
{
AWS_NETWORKFIREWALL_API IdentifiedType GetIdentifiedTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForIdentifiedType(IdentifiedType value);
} // namespace IdentifiedTypeMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
