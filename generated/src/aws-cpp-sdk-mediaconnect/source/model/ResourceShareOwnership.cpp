/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/ResourceShareOwnership.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace ResourceShareOwnershipMapper {

static const int OWNED_HASH = HashingUtils::HashString("OWNED");
static const int CONSUMED_HASH = HashingUtils::HashString("CONSUMED");

ResourceShareOwnership GetResourceShareOwnershipForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OWNED_HASH) {
    return ResourceShareOwnership::OWNED;
  } else if (hashCode == CONSUMED_HASH) {
    return ResourceShareOwnership::CONSUMED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceShareOwnership>(hashCode);
  }

  return ResourceShareOwnership::NOT_SET;
}

Aws::String GetNameForResourceShareOwnership(ResourceShareOwnership enumValue) {
  switch (enumValue) {
    case ResourceShareOwnership::NOT_SET:
      return {};
    case ResourceShareOwnership::OWNED:
      return "OWNED";
    case ResourceShareOwnership::CONSUMED:
      return "CONSUMED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceShareOwnershipMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
