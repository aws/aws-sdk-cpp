/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/RouterContentQualityAnalysisType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace RouterContentQualityAnalysisTypeMapper {

static const int CONTENT_LEVEL_HASH = HashingUtils::HashString("CONTENT_LEVEL");

RouterContentQualityAnalysisType GetRouterContentQualityAnalysisTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTENT_LEVEL_HASH) {
    return RouterContentQualityAnalysisType::CONTENT_LEVEL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RouterContentQualityAnalysisType>(hashCode);
  }

  return RouterContentQualityAnalysisType::NOT_SET;
}

Aws::String GetNameForRouterContentQualityAnalysisType(RouterContentQualityAnalysisType enumValue) {
  switch (enumValue) {
    case RouterContentQualityAnalysisType::NOT_SET:
      return {};
    case RouterContentQualityAnalysisType::CONTENT_LEVEL:
      return "CONTENT_LEVEL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RouterContentQualityAnalysisTypeMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
