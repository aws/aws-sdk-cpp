/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/DnsProtocol.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace DnsProtocolMapper {

static const int DO53_HASH = HashingUtils::HashString("DO53");
static const int DOH_HASH = HashingUtils::HashString("DOH");
static const int DOT_HASH = HashingUtils::HashString("DOT");

DnsProtocol GetDnsProtocolForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DO53_HASH) {
    return DnsProtocol::DO53;
  } else if (hashCode == DOH_HASH) {
    return DnsProtocol::DOH;
  } else if (hashCode == DOT_HASH) {
    return DnsProtocol::DOT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DnsProtocol>(hashCode);
  }

  return DnsProtocol::NOT_SET;
}

Aws::String GetNameForDnsProtocol(DnsProtocol enumValue) {
  switch (enumValue) {
    case DnsProtocol::NOT_SET:
      return {};
    case DnsProtocol::DO53:
      return "DO53";
    case DnsProtocol::DOH:
      return "DOH";
    case DnsProtocol::DOT:
      return "DOT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DnsProtocolMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
