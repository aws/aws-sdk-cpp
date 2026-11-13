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
enum class PolicyDefaultAction { NOT_SET, DROP, ACCEPT, REJECT, ALERT };

namespace PolicyDefaultActionMapper {
AWS_NETWORKFIREWALL_API PolicyDefaultAction GetPolicyDefaultActionForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForPolicyDefaultAction(PolicyDefaultAction value);
}  // namespace PolicyDefaultActionMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
