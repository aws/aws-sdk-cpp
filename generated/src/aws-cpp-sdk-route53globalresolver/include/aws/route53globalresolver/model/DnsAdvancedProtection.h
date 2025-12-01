/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
enum class DnsAdvancedProtection { NOT_SET, DGA, DNS_TUNNELING };

namespace DnsAdvancedProtectionMapper {
AWS_ROUTE53GLOBALRESOLVER_API DnsAdvancedProtection GetDnsAdvancedProtectionForName(const Aws::String& name);

AWS_ROUTE53GLOBALRESOLVER_API Aws::String GetNameForDnsAdvancedProtection(DnsAdvancedProtection value);
}  // namespace DnsAdvancedProtectionMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
