/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/EngineMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace EngineModeMapper {

static const int GENERAL_HASH = HashingUtils::HashString("GENERAL");
static const int OPTIMIZED_HASH = HashingUtils::HashString("OPTIMIZED");

EngineMode GetEngineModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GENERAL_HASH) {
    return EngineMode::GENERAL;
  } else if (hashCode == OPTIMIZED_HASH) {
    return EngineMode::OPTIMIZED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EngineMode>(hashCode);
  }

  return EngineMode::NOT_SET;
}

Aws::String GetNameForEngineMode(EngineMode enumValue) {
  switch (enumValue) {
    case EngineMode::NOT_SET:
      return {};
    case EngineMode::GENERAL:
      return "GENERAL";
    case EngineMode::OPTIMIZED:
      return "OPTIMIZED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EngineModeMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
