/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/model/ScteInSegments.h>

using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {
namespace ScteInSegmentsMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int ALL_HASH = HashingUtils::HashString("ALL");

ScteInSegments GetScteInSegmentsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return ScteInSegments::NONE;
  } else if (hashCode == ALL_HASH) {
    return ScteInSegments::ALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScteInSegments>(hashCode);
  }

  return ScteInSegments::NOT_SET;
}

Aws::String GetNameForScteInSegments(ScteInSegments enumValue) {
  switch (enumValue) {
    case ScteInSegments::NOT_SET:
      return {};
    case ScteInSegments::NONE:
      return "NONE";
    case ScteInSegments::ALL:
      return "ALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScteInSegmentsMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
