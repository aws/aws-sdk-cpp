/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/DnsAdvancedProtection.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace DnsAdvancedProtectionMapper {

static const int DGA_HASH = HashingUtils::HashString("DGA");
static const int DNS_TUNNELING_HASH = HashingUtils::HashString("DNS_TUNNELING");

DnsAdvancedProtection GetDnsAdvancedProtectionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DGA_HASH) {
    return DnsAdvancedProtection::DGA;
  } else if (hashCode == DNS_TUNNELING_HASH) {
    return DnsAdvancedProtection::DNS_TUNNELING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DnsAdvancedProtection>(hashCode);
  }

  return DnsAdvancedProtection::NOT_SET;
}

Aws::String GetNameForDnsAdvancedProtection(DnsAdvancedProtection enumValue) {
  switch (enumValue) {
    case DnsAdvancedProtection::NOT_SET:
      return {};
    case DnsAdvancedProtection::DGA:
      return "DGA";
    case DnsAdvancedProtection::DNS_TUNNELING:
      return "DNS_TUNNELING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DnsAdvancedProtectionMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
