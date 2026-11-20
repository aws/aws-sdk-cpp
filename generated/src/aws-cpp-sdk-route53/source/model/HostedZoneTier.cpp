/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53/model/HostedZoneTier.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {
namespace HostedZoneTierMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int ADVANCED_HASH = HashingUtils::HashString("ADVANCED");

HostedZoneTier GetHostedZoneTierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return HostedZoneTier::STANDARD;
  } else if (hashCode == ADVANCED_HASH) {
    return HostedZoneTier::ADVANCED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HostedZoneTier>(hashCode);
  }

  return HostedZoneTier::NOT_SET;
}

Aws::String GetNameForHostedZoneTier(HostedZoneTier enumValue) {
  switch (enumValue) {
    case HostedZoneTier::NOT_SET:
      return {};
    case HostedZoneTier::STANDARD:
      return "STANDARD";
    case HostedZoneTier::ADVANCED:
      return "ADVANCED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HostedZoneTierMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
