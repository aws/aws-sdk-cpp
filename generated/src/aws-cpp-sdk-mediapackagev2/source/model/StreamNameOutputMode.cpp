/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediapackagev2/model/StreamNameOutputMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace mediapackagev2 {
namespace Model {
namespace StreamNameOutputModeMapper {

static const int INDEX_HASH = HashingUtils::HashString("INDEX");
static const int PASSTHROUGH_NAME_HASH = HashingUtils::HashString("PASSTHROUGH_NAME");

StreamNameOutputMode GetStreamNameOutputModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INDEX_HASH) {
    return StreamNameOutputMode::INDEX;
  } else if (hashCode == PASSTHROUGH_NAME_HASH) {
    return StreamNameOutputMode::PASSTHROUGH_NAME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StreamNameOutputMode>(hashCode);
  }

  return StreamNameOutputMode::NOT_SET;
}

Aws::String GetNameForStreamNameOutputMode(StreamNameOutputMode enumValue) {
  switch (enumValue) {
    case StreamNameOutputMode::NOT_SET:
      return {};
    case StreamNameOutputMode::INDEX:
      return "INDEX";
    case StreamNameOutputMode::PASSTHROUGH_NAME:
      return "PASSTHROUGH_NAME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StreamNameOutputModeMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
