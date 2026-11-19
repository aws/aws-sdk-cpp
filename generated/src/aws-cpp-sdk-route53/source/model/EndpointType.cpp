/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53/model/EndpointType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {
namespace EndpointTypeMapper {

static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");

EndpointType GetEndpointTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLIC__HASH) {
    return EndpointType::PUBLIC_;
  } else if (hashCode == PRIVATE__HASH) {
    return EndpointType::PRIVATE_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EndpointType>(hashCode);
  }

  return EndpointType::NOT_SET;
}

Aws::String GetNameForEndpointType(EndpointType enumValue) {
  switch (enumValue) {
    case EndpointType::NOT_SET:
      return {};
    case EndpointType::PUBLIC_:
      return "PUBLIC";
    case EndpointType::PRIVATE_:
      return "PRIVATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EndpointTypeMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
