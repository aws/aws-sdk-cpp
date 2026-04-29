/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/model/UriPathType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {
namespace UriPathTypeMapper {

static const int LEAF_HASH = HashingUtils::HashString("LEAF");
static const int ROOT_HASH = HashingUtils::HashString("ROOT");

UriPathType GetUriPathTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LEAF_HASH) {
    return UriPathType::LEAF;
  } else if (hashCode == ROOT_HASH) {
    return UriPathType::ROOT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UriPathType>(hashCode);
  }

  return UriPathType::NOT_SET;
}

Aws::String GetNameForUriPathType(UriPathType enumValue) {
  switch (enumValue) {
    case UriPathType::NOT_SET:
      return {};
    case UriPathType::LEAF:
      return "LEAF";
    case UriPathType::ROOT:
      return "ROOT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UriPathTypeMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
