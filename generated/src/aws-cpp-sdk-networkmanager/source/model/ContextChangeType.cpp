/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/networkmanager/model/ContextChangeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkManager {
namespace Model {
namespace ContextChangeTypeMapper {

static const int ADDED_HASH = HashingUtils::HashString("ADDED");
static const int REMOVED_HASH = HashingUtils::HashString("REMOVED");

ContextChangeType GetContextChangeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ADDED_HASH) {
    return ContextChangeType::ADDED;
  } else if (hashCode == REMOVED_HASH) {
    return ContextChangeType::REMOVED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContextChangeType>(hashCode);
  }

  return ContextChangeType::NOT_SET;
}

Aws::String GetNameForContextChangeType(ContextChangeType enumValue) {
  switch (enumValue) {
    case ContextChangeType::NOT_SET:
      return {};
    case ContextChangeType::ADDED:
      return "ADDED";
    case ContextChangeType::REMOVED:
      return "REMOVED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContextChangeTypeMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
