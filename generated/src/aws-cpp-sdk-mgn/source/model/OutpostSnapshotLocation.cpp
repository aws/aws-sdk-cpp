/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/OutpostSnapshotLocation.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace OutpostSnapshotLocationMapper {

static const int OUTPOST_HASH = HashingUtils::HashString("OUTPOST");
static const int REGION_HASH = HashingUtils::HashString("REGION");

OutpostSnapshotLocation GetOutpostSnapshotLocationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OUTPOST_HASH) {
    return OutpostSnapshotLocation::OUTPOST;
  } else if (hashCode == REGION_HASH) {
    return OutpostSnapshotLocation::REGION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OutpostSnapshotLocation>(hashCode);
  }

  return OutpostSnapshotLocation::NOT_SET;
}

Aws::String GetNameForOutpostSnapshotLocation(OutpostSnapshotLocation enumValue) {
  switch (enumValue) {
    case OutpostSnapshotLocation::NOT_SET:
      return {};
    case OutpostSnapshotLocation::OUTPOST:
      return "OUTPOST";
    case OutpostSnapshotLocation::REGION:
      return "REGION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OutpostSnapshotLocationMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
