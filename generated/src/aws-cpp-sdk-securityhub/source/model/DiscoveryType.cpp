/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/DiscoveryType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace DiscoveryTypeMapper {

static const int Managed_HASH = HashingUtils::HashString("Managed");
static const int SelfHosted_HASH = HashingUtils::HashString("SelfHosted");

DiscoveryType GetDiscoveryTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Managed_HASH) {
    return DiscoveryType::Managed;
  } else if (hashCode == SelfHosted_HASH) {
    return DiscoveryType::SelfHosted;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DiscoveryType>(hashCode);
  }

  return DiscoveryType::NOT_SET;
}

Aws::String GetNameForDiscoveryType(DiscoveryType enumValue) {
  switch (enumValue) {
    case DiscoveryType::NOT_SET:
      return {};
    case DiscoveryType::Managed:
      return "Managed";
    case DiscoveryType::SelfHosted:
      return "SelfHosted";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DiscoveryTypeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
