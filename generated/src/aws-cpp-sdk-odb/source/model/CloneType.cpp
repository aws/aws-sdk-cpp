/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/CloneType.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace CloneTypeMapper {

static const int FULL_HASH = HashingUtils::HashString("FULL");
static const int METADATA_HASH = HashingUtils::HashString("METADATA");
static const int PARTIAL_HASH = HashingUtils::HashString("PARTIAL");

CloneType GetCloneTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FULL_HASH) {
    return CloneType::FULL;
  } else if (hashCode == METADATA_HASH) {
    return CloneType::METADATA;
  } else if (hashCode == PARTIAL_HASH) {
    return CloneType::PARTIAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CloneType>(hashCode);
  }

  return CloneType::NOT_SET;
}

Aws::String GetNameForCloneType(CloneType enumValue) {
  switch (enumValue) {
    case CloneType::NOT_SET:
      return {};
    case CloneType::FULL:
      return "FULL";
    case CloneType::METADATA:
      return "METADATA";
    case CloneType::PARTIAL:
      return "PARTIAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CloneTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
