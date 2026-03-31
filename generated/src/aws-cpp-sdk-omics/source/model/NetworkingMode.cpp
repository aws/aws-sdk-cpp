/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/omics/model/NetworkingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {
namespace NetworkingModeMapper {

static const int RESTRICTED_HASH = HashingUtils::HashString("RESTRICTED");
static const int VPC_HASH = HashingUtils::HashString("VPC");

NetworkingMode GetNetworkingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RESTRICTED_HASH) {
    return NetworkingMode::RESTRICTED;
  } else if (hashCode == VPC_HASH) {
    return NetworkingMode::VPC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkingMode>(hashCode);
  }

  return NetworkingMode::NOT_SET;
}

Aws::String GetNameForNetworkingMode(NetworkingMode enumValue) {
  switch (enumValue) {
    case NetworkingMode::NOT_SET:
      return {};
    case NetworkingMode::RESTRICTED:
      return "RESTRICTED";
    case NetworkingMode::VPC:
      return "VPC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkingModeMapper
}  // namespace Model
}  // namespace Omics
}  // namespace Aws
