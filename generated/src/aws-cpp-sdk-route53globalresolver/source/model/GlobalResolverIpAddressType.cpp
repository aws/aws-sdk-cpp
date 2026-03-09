/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/GlobalResolverIpAddressType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace GlobalResolverIpAddressTypeMapper {

static const int IPV4_HASH = HashingUtils::HashString("IPV4");
static const int DUAL_STACK_HASH = HashingUtils::HashString("DUAL_STACK");

GlobalResolverIpAddressType GetGlobalResolverIpAddressTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IPV4_HASH) {
    return GlobalResolverIpAddressType::IPV4;
  } else if (hashCode == DUAL_STACK_HASH) {
    return GlobalResolverIpAddressType::DUAL_STACK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GlobalResolverIpAddressType>(hashCode);
  }

  return GlobalResolverIpAddressType::NOT_SET;
}

Aws::String GetNameForGlobalResolverIpAddressType(GlobalResolverIpAddressType enumValue) {
  switch (enumValue) {
    case GlobalResolverIpAddressType::NOT_SET:
      return {};
    case GlobalResolverIpAddressType::IPV4:
      return "IPV4";
    case GlobalResolverIpAddressType::DUAL_STACK:
      return "DUAL_STACK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GlobalResolverIpAddressTypeMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
