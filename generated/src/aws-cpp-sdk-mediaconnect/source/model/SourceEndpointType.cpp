/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/SourceEndpointType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace SourceEndpointTypeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int ROUTER_OUTPUT_HASH = HashingUtils::HashString("ROUTER_OUTPUT");

SourceEndpointType GetSourceEndpointTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return SourceEndpointType::STANDARD;
  } else if (hashCode == ROUTER_OUTPUT_HASH) {
    return SourceEndpointType::ROUTER_OUTPUT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SourceEndpointType>(hashCode);
  }

  return SourceEndpointType::NOT_SET;
}

Aws::String GetNameForSourceEndpointType(SourceEndpointType enumValue) {
  switch (enumValue) {
    case SourceEndpointType::NOT_SET:
      return {};
    case SourceEndpointType::STANDARD:
      return "STANDARD";
    case SourceEndpointType::ROUTER_OUTPUT:
      return "ROUTER_OUTPUT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SourceEndpointTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
