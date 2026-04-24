/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/DnsSecValidationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace DnsSecValidationTypeMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

DnsSecValidationType GetDnsSecValidationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return DnsSecValidationType::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return DnsSecValidationType::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DnsSecValidationType>(hashCode);
  }

  return DnsSecValidationType::NOT_SET;
}

Aws::String GetNameForDnsSecValidationType(DnsSecValidationType enumValue) {
  switch (enumValue) {
    case DnsSecValidationType::NOT_SET:
      return {};
    case DnsSecValidationType::ENABLED:
      return "ENABLED";
    case DnsSecValidationType::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DnsSecValidationTypeMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
