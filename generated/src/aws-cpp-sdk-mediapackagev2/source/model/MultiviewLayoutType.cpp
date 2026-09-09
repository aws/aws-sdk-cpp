/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/model/MultiviewLayoutType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {
namespace MultiviewLayoutTypeMapper {

static const int LAYOUT_2EH_HASH = HashingUtils::HashString("LAYOUT_2EH");
static const int LAYOUT_2PL_HASH = HashingUtils::HashString("LAYOUT_2PL");
static const int LAYOUT_3EL_HASH = HashingUtils::HashString("LAYOUT_3EL");
static const int LAYOUT_3PL_HASH = HashingUtils::HashString("LAYOUT_3PL");
static const int LAYOUT_4E_HASH = HashingUtils::HashString("LAYOUT_4E");
static const int LAYOUT_4PL_HASH = HashingUtils::HashString("LAYOUT_4PL");

MultiviewLayoutType GetMultiviewLayoutTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LAYOUT_2EH_HASH) {
    return MultiviewLayoutType::LAYOUT_2EH;
  } else if (hashCode == LAYOUT_2PL_HASH) {
    return MultiviewLayoutType::LAYOUT_2PL;
  } else if (hashCode == LAYOUT_3EL_HASH) {
    return MultiviewLayoutType::LAYOUT_3EL;
  } else if (hashCode == LAYOUT_3PL_HASH) {
    return MultiviewLayoutType::LAYOUT_3PL;
  } else if (hashCode == LAYOUT_4E_HASH) {
    return MultiviewLayoutType::LAYOUT_4E;
  } else if (hashCode == LAYOUT_4PL_HASH) {
    return MultiviewLayoutType::LAYOUT_4PL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MultiviewLayoutType>(hashCode);
  }

  return MultiviewLayoutType::NOT_SET;
}

Aws::String GetNameForMultiviewLayoutType(MultiviewLayoutType enumValue) {
  switch (enumValue) {
    case MultiviewLayoutType::NOT_SET:
      return {};
    case MultiviewLayoutType::LAYOUT_2EH:
      return "LAYOUT_2EH";
    case MultiviewLayoutType::LAYOUT_2PL:
      return "LAYOUT_2PL";
    case MultiviewLayoutType::LAYOUT_3EL:
      return "LAYOUT_3EL";
    case MultiviewLayoutType::LAYOUT_3PL:
      return "LAYOUT_3PL";
    case MultiviewLayoutType::LAYOUT_4E:
      return "LAYOUT_4E";
    case MultiviewLayoutType::LAYOUT_4PL:
      return "LAYOUT_4PL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MultiviewLayoutTypeMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
