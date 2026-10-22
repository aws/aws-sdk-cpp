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
enum class DNSExpiryExceptionPolicy { NOT_SET, REJECT, DROP, CONTINUE };

namespace DNSExpiryExceptionPolicyMapper {
AWS_NETWORKFIREWALL_API DNSExpiryExceptionPolicy GetDNSExpiryExceptionPolicyForName(const Aws::String& name);

AWS_NETWORKFIREWALL_API Aws::String GetNameForDNSExpiryExceptionPolicy(DNSExpiryExceptionPolicy value);
}  // namespace DNSExpiryExceptionPolicyMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
