/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/omics/model/RunOutputUriPrefixMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {
namespace RunOutputUriPrefixModeMapper {

static const int SERVICE_DEFINED_HASH = HashingUtils::HashString("SERVICE_DEFINED");
static const int NONE_WITH_OVERWRITE_HASH = HashingUtils::HashString("NONE_WITH_OVERWRITE");

RunOutputUriPrefixMode GetRunOutputUriPrefixModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SERVICE_DEFINED_HASH) {
    return RunOutputUriPrefixMode::SERVICE_DEFINED;
  } else if (hashCode == NONE_WITH_OVERWRITE_HASH) {
    return RunOutputUriPrefixMode::NONE_WITH_OVERWRITE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RunOutputUriPrefixMode>(hashCode);
  }

  return RunOutputUriPrefixMode::NOT_SET;
}

Aws::String GetNameForRunOutputUriPrefixMode(RunOutputUriPrefixMode enumValue) {
  switch (enumValue) {
    case RunOutputUriPrefixMode::NOT_SET:
      return {};
    case RunOutputUriPrefixMode::SERVICE_DEFINED:
      return "SERVICE_DEFINED";
    case RunOutputUriPrefixMode::NONE_WITH_OVERWRITE:
      return "NONE_WITH_OVERWRITE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RunOutputUriPrefixModeMapper
}  // namespace Model
}  // namespace Omics
}  // namespace Aws
