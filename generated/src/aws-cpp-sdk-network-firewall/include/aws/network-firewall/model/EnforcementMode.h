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
enum class EnforcementMode { NOT_SET, POLICY_CONTROLLED };

namespace EnforcementModeMapper {
AWS_NETWORKFIREWALL_API EnforcementMode GetEnforcementModeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForEnforcementMode(EnforcementMode value);
}  // namespace EnforcementModeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
