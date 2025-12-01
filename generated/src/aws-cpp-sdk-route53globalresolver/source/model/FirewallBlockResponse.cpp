/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/FirewallBlockResponse.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace FirewallBlockResponseMapper {

static const int NODATA_HASH = HashingUtils::HashString("NODATA");
static const int NXDOMAIN_HASH = HashingUtils::HashString("NXDOMAIN");
static const int OVERRIDE_HASH = HashingUtils::HashString("OVERRIDE");

FirewallBlockResponse GetFirewallBlockResponseForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NODATA_HASH) {
    return FirewallBlockResponse::NODATA;
  } else if (hashCode == NXDOMAIN_HASH) {
    return FirewallBlockResponse::NXDOMAIN;
  } else if (hashCode == OVERRIDE_HASH) {
    return FirewallBlockResponse::OVERRIDE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FirewallBlockResponse>(hashCode);
  }

  return FirewallBlockResponse::NOT_SET;
}

Aws::String GetNameForFirewallBlockResponse(FirewallBlockResponse enumValue) {
  switch (enumValue) {
    case FirewallBlockResponse::NOT_SET:
      return {};
    case FirewallBlockResponse::NODATA:
      return "NODATA";
    case FirewallBlockResponse::NXDOMAIN:
      return "NXDOMAIN";
    case FirewallBlockResponse::OVERRIDE:
      return "OVERRIDE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FirewallBlockResponseMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
