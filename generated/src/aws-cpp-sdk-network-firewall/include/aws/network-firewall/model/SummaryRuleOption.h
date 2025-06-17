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
  enum class SummaryRuleOption
  {
    NOT_SET,
    SID,
    MSG,
    METADATA
  };

namespace SummaryRuleOptionMapper
{
AWS_NETWORKFIREWALL_API SummaryRuleOption GetSummaryRuleOptionForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForSummaryRuleOption(SummaryRuleOption value);
} // namespace SummaryRuleOptionMapper
} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
