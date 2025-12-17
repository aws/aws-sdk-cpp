/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/H265TreeBlockSize.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace H265TreeBlockSizeMapper {

static const int AUTO_HASH = HashingUtils::HashString("AUTO");
static const int TREE_SIZE_32X32_HASH = HashingUtils::HashString("TREE_SIZE_32X32");

H265TreeBlockSize GetH265TreeBlockSizeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTO_HASH) {
    return H265TreeBlockSize::AUTO;
  } else if (hashCode == TREE_SIZE_32X32_HASH) {
    return H265TreeBlockSize::TREE_SIZE_32X32;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<H265TreeBlockSize>(hashCode);
  }

  return H265TreeBlockSize::NOT_SET;
}

Aws::String GetNameForH265TreeBlockSize(H265TreeBlockSize enumValue) {
  switch (enumValue) {
    case H265TreeBlockSize::NOT_SET:
      return {};
    case H265TreeBlockSize::AUTO:
      return "AUTO";
    case H265TreeBlockSize::TREE_SIZE_32X32:
      return "TREE_SIZE_32X32";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace H265TreeBlockSizeMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
