/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/model/SpekeVersion.h>

using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {
namespace SpekeVersionMapper {

static const int V2_0_HASH = HashingUtils::HashString("V2_0");
static const int V2_1_HASH = HashingUtils::HashString("V2_1");

SpekeVersion GetSpekeVersionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == V2_0_HASH) {
    return SpekeVersion::V2_0;
  } else if (hashCode == V2_1_HASH) {
    return SpekeVersion::V2_1;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SpekeVersion>(hashCode);
  }

  return SpekeVersion::NOT_SET;
}

Aws::String GetNameForSpekeVersion(SpekeVersion enumValue) {
  switch (enumValue) {
    case SpekeVersion::NOT_SET:
      return {};
    case SpekeVersion::V2_0:
      return "V2_0";
    case SpekeVersion::V2_1:
      return "V2_1";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SpekeVersionMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
