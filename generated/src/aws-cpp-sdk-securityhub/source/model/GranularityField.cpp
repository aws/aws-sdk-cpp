/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/GranularityField.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace GranularityFieldMapper {

static const int Daily_HASH = HashingUtils::HashString("Daily");
static const int Weekly_HASH = HashingUtils::HashString("Weekly");
static const int Monthly_HASH = HashingUtils::HashString("Monthly");

GranularityField GetGranularityFieldForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Daily_HASH) {
    return GranularityField::Daily;
  } else if (hashCode == Weekly_HASH) {
    return GranularityField::Weekly;
  } else if (hashCode == Monthly_HASH) {
    return GranularityField::Monthly;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GranularityField>(hashCode);
  }

  return GranularityField::NOT_SET;
}

Aws::String GetNameForGranularityField(GranularityField enumValue) {
  switch (enumValue) {
    case GranularityField::NOT_SET:
      return {};
    case GranularityField::Daily:
      return "Daily";
    case GranularityField::Weekly:
      return "Weekly";
    case GranularityField::Monthly:
      return "Monthly";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GranularityFieldMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
