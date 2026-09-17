/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/vpc-lattice/model/ProtocolType.h>

using namespace Aws::Utils;

namespace Aws {
namespace VPCLattice {
namespace Model {
namespace ProtocolTypeMapper {

static const int TCP_HASH = HashingUtils::HashString("TCP");
static const int TCP_UDP_HASH = HashingUtils::HashString("TCP_UDP");

ProtocolType GetProtocolTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TCP_HASH) {
    return ProtocolType::TCP;
  } else if (hashCode == TCP_UDP_HASH) {
    return ProtocolType::TCP_UDP;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProtocolType>(hashCode);
  }

  return ProtocolType::NOT_SET;
}

Aws::String GetNameForProtocolType(ProtocolType enumValue) {
  switch (enumValue) {
    case ProtocolType::NOT_SET:
      return {};
    case ProtocolType::TCP:
      return "TCP";
    case ProtocolType::TCP_UDP:
      return "TCP_UDP";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProtocolTypeMapper
}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
