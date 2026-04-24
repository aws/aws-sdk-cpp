/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/AnalyzerType.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace AnalyzerTypeMapper {

static const int REACHABILITY_ANALYZER_HASH = HashingUtils::HashString("REACHABILITY_ANALYZER");

AnalyzerType GetAnalyzerTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REACHABILITY_ANALYZER_HASH) {
    return AnalyzerType::REACHABILITY_ANALYZER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnalyzerType>(hashCode);
  }

  return AnalyzerType::NOT_SET;
}

Aws::String GetNameForAnalyzerType(AnalyzerType enumValue) {
  switch (enumValue) {
    case AnalyzerType::NOT_SET:
      return {};
    case AnalyzerType::REACHABILITY_ANALYZER:
      return "REACHABILITY_ANALYZER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnalyzerTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
