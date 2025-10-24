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
enum class IPAddressType { NOT_SET, DUALSTACK, IPV4, IPV6 };

namespace IPAddressTypeMapper {
AWS_NETWORKFIREWALL_API IPAddressType GetIPAddressTypeForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForIPAddressType(IPAddressType value);
}  // namespace IPAddressTypeMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
