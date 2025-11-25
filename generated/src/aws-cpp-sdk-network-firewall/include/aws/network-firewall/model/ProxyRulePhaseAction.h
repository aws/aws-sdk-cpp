/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>

namespace Aws {
namespace NetworkFirewall {
namespace Model {
enum class ProxyRulePhaseAction { NOT_SET, ALLOW, DENY, ALERT };

namespace ProxyRulePhaseActionMapper {
AWS_NETWORKFIREWALL_API ProxyRulePhaseAction GetProxyRulePhaseActionForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForProxyRulePhaseAction(ProxyRulePhaseAction value);
}  // namespace ProxyRulePhaseActionMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
