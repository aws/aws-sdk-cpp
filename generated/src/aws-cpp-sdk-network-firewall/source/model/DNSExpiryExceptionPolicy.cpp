/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/DNSExpiryExceptionPolicy.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace DNSExpiryExceptionPolicyMapper {

static const int REJECT_HASH = HashingUtils::HashString("REJECT");
static const int DROP_HASH = HashingUtils::HashString("DROP");
static const int CONTINUE_HASH = HashingUtils::HashString("CONTINUE");

DNSExpiryExceptionPolicy GetDNSExpiryExceptionPolicyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REJECT_HASH) {
    return DNSExpiryExceptionPolicy::REJECT;
  } else if (hashCode == DROP_HASH) {
    return DNSExpiryExceptionPolicy::DROP;
  } else if (hashCode == CONTINUE_HASH) {
    return DNSExpiryExceptionPolicy::CONTINUE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DNSExpiryExceptionPolicy>(hashCode);
  }

  return DNSExpiryExceptionPolicy::NOT_SET;
}

Aws::String GetNameForDNSExpiryExceptionPolicy(DNSExpiryExceptionPolicy enumValue) {
  switch (enumValue) {
    case DNSExpiryExceptionPolicy::NOT_SET:
      return {};
    case DNSExpiryExceptionPolicy::REJECT:
      return "REJECT";
    case DNSExpiryExceptionPolicy::DROP:
      return "DROP";
    case DNSExpiryExceptionPolicy::CONTINUE:
      return "CONTINUE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DNSExpiryExceptionPolicyMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
