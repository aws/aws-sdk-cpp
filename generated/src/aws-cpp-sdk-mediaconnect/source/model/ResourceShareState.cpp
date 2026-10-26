/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/ResourceShareState.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace ResourceShareStateMapper {

static const int SHARED_HASH = HashingUtils::HashString("SHARED");
static const int UNSHARED_HASH = HashingUtils::HashString("UNSHARED");

ResourceShareState GetResourceShareStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SHARED_HASH) {
    return ResourceShareState::SHARED;
  } else if (hashCode == UNSHARED_HASH) {
    return ResourceShareState::UNSHARED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceShareState>(hashCode);
  }

  return ResourceShareState::NOT_SET;
}

Aws::String GetNameForResourceShareState(ResourceShareState enumValue) {
  switch (enumValue) {
    case ResourceShareState::NOT_SET:
      return {};
    case ResourceShareState::SHARED:
      return "SHARED";
    case ResourceShareState::UNSHARED:
      return "UNSHARED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceShareStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
