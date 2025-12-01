/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53globalresolver/model/EdnsClientSubnetType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53GlobalResolver {
namespace Model {
namespace EdnsClientSubnetTypeMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

EdnsClientSubnetType GetEdnsClientSubnetTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return EdnsClientSubnetType::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return EdnsClientSubnetType::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EdnsClientSubnetType>(hashCode);
  }

  return EdnsClientSubnetType::NOT_SET;
}

Aws::String GetNameForEdnsClientSubnetType(EdnsClientSubnetType enumValue) {
  switch (enumValue) {
    case EdnsClientSubnetType::NOT_SET:
      return {};
    case EdnsClientSubnetType::ENABLED:
      return "ENABLED";
    case EdnsClientSubnetType::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EdnsClientSubnetTypeMapper
}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
