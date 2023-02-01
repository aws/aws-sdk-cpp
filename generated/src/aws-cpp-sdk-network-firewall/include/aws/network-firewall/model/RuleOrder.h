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
  enum class RuleOrder
  {
    NOT_SET,
    DEFAULT_ACTION_ORDER,
    STRICT_ORDER
  };

namespace RuleOrderMapper
{
AWS_NETWORKFIREWALL_API RuleOrder GetRuleOrderForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForRuleOrder(RuleOrder value);
} // namespace RuleOrderMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
