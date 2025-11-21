/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/security-ir/model/UsefulnessRating.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityIR {
namespace Model {
namespace UsefulnessRatingMapper {

static const int USEFUL_HASH = HashingUtils::HashString("USEFUL");
static const int NOT_USEFUL_HASH = HashingUtils::HashString("NOT_USEFUL");

UsefulnessRating GetUsefulnessRatingForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USEFUL_HASH) {
    return UsefulnessRating::USEFUL;
  } else if (hashCode == NOT_USEFUL_HASH) {
    return UsefulnessRating::NOT_USEFUL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UsefulnessRating>(hashCode);
  }

  return UsefulnessRating::NOT_SET;
}

Aws::String GetNameForUsefulnessRating(UsefulnessRating enumValue) {
  switch (enumValue) {
    case UsefulnessRating::NOT_SET:
      return {};
    case UsefulnessRating::USEFUL:
      return "USEFUL";
    case UsefulnessRating::NOT_USEFUL:
      return "NOT_USEFUL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UsefulnessRatingMapper
}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
