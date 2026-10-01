/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/ExposureImpact.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace ExposureImpactMapper {

static const int Reduces_HASH = HashingUtils::HashString("Reduces");
static const int Resolves_HASH = HashingUtils::HashString("Resolves");
static const int Unchanged_HASH = HashingUtils::HashString("Unchanged");

ExposureImpact GetExposureImpactForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Reduces_HASH) {
    return ExposureImpact::Reduces;
  } else if (hashCode == Resolves_HASH) {
    return ExposureImpact::Resolves;
  } else if (hashCode == Unchanged_HASH) {
    return ExposureImpact::Unchanged;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExposureImpact>(hashCode);
  }

  return ExposureImpact::NOT_SET;
}

Aws::String GetNameForExposureImpact(ExposureImpact enumValue) {
  switch (enumValue) {
    case ExposureImpact::NOT_SET:
      return {};
    case ExposureImpact::Reduces:
      return "Reduces";
    case ExposureImpact::Resolves:
      return "Resolves";
    case ExposureImpact::Unchanged:
      return "Unchanged";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExposureImpactMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
