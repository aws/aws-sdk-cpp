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
enum class ProxyModifyState { NOT_SET, MODIFYING, COMPLETED, FAILED };

namespace ProxyModifyStateMapper {
AWS_NETWORKFIREWALL_API ProxyModifyState GetProxyModifyStateForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForProxyModifyState(ProxyModifyState value);
}  // namespace ProxyModifyStateMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
