/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/DecalStyleType.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace DecalStyleTypeMapper {

static const int Manual_HASH = HashingUtils::HashString("Manual");
static const int Auto_HASH = HashingUtils::HashString("Auto");

DecalStyleType GetDecalStyleTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Manual_HASH) {
    return DecalStyleType::Manual;
  } else if (hashCode == Auto_HASH) {
    return DecalStyleType::Auto;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DecalStyleType>(hashCode);
  }

  return DecalStyleType::NOT_SET;
}

Aws::String GetNameForDecalStyleType(DecalStyleType enumValue) {
  switch (enumValue) {
    case DecalStyleType::NOT_SET:
      return {};
    case DecalStyleType::Manual:
      return "Manual";
    case DecalStyleType::Auto:
      return "Auto";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DecalStyleTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
