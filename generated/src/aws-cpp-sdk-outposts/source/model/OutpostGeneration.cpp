/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/OutpostGeneration.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace OutpostGenerationMapper {

static const int GENERATION_2_HASH = HashingUtils::HashString("GENERATION_2");
static const int GENERATION_1_HASH = HashingUtils::HashString("GENERATION_1");

OutpostGeneration GetOutpostGenerationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GENERATION_2_HASH) {
    return OutpostGeneration::GENERATION_2;
  } else if (hashCode == GENERATION_1_HASH) {
    return OutpostGeneration::GENERATION_1;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OutpostGeneration>(hashCode);
  }

  return OutpostGeneration::NOT_SET;
}

Aws::String GetNameForOutpostGeneration(OutpostGeneration enumValue) {
  switch (enumValue) {
    case OutpostGeneration::NOT_SET:
      return {};
    case OutpostGeneration::GENERATION_2:
      return "GENERATION_2";
    case OutpostGeneration::GENERATION_1:
      return "GENERATION_1";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OutpostGenerationMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
