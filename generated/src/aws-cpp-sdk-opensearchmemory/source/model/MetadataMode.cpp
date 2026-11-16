/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchmemory/model/MetadataMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {
namespace MetadataModeMapper {

static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");
static const int MERGE_HASH = HashingUtils::HashString("MERGE");

MetadataMode GetMetadataModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REPLACE_HASH) {
    return MetadataMode::REPLACE;
  } else if (hashCode == MERGE_HASH) {
    return MetadataMode::MERGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MetadataMode>(hashCode);
  }

  return MetadataMode::NOT_SET;
}

Aws::String GetNameForMetadataMode(MetadataMode enumValue) {
  switch (enumValue) {
    case MetadataMode::NOT_SET:
      return {};
    case MetadataMode::REPLACE:
      return "REPLACE";
    case MetadataMode::MERGE:
      return "MERGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetadataModeMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
