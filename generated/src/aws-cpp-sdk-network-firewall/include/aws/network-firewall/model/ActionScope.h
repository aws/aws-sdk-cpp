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
enum class ActionScope { NOT_SET, FLOW, TX, HOOK, PACKET };

namespace ActionScopeMapper {
AWS_NETWORKFIREWALL_API ActionScope GetActionScopeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForActionScope(ActionScope value);
}  // namespace ActionScopeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
