/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rtbfabric/model/ConnectivityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {
namespace ConnectivityTypeMapper {

static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
static const int PUBLIC_INGRESS_HASH = HashingUtils::HashString("PUBLIC_INGRESS");
static const int PUBLIC_EGRESS_HASH = HashingUtils::HashString("PUBLIC_EGRESS");
static const int EXTERNAL_INBOUND_HASH = HashingUtils::HashString("EXTERNAL_INBOUND");

ConnectivityType GetConnectivityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEFAULT_HASH) {
    return ConnectivityType::DEFAULT;
  } else if (hashCode == PUBLIC_INGRESS_HASH) {
    return ConnectivityType::PUBLIC_INGRESS;
  } else if (hashCode == PUBLIC_EGRESS_HASH) {
    return ConnectivityType::PUBLIC_EGRESS;
  } else if (hashCode == EXTERNAL_INBOUND_HASH) {
    return ConnectivityType::EXTERNAL_INBOUND;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectivityType>(hashCode);
  }

  return ConnectivityType::NOT_SET;
}

Aws::String GetNameForConnectivityType(ConnectivityType enumValue) {
  switch (enumValue) {
    case ConnectivityType::NOT_SET:
      return {};
    case ConnectivityType::DEFAULT:
      return "DEFAULT";
    case ConnectivityType::PUBLIC_INGRESS:
      return "PUBLIC_INGRESS";
    case ConnectivityType::PUBLIC_EGRESS:
      return "PUBLIC_EGRESS";
    case ConnectivityType::EXTERNAL_INBOUND:
      return "EXTERNAL_INBOUND";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectivityTypeMapper
}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
