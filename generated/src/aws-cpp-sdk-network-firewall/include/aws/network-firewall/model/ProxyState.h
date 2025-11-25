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
enum class ProxyState { NOT_SET, ATTACHING, ATTACHED, DETACHING, DETACHED, ATTACH_FAILED, DETACH_FAILED };

namespace ProxyStateMapper {
AWS_NETWORKFIREWALL_API ProxyState GetProxyStateForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForProxyState(ProxyState value);
}  // namespace ProxyStateMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
