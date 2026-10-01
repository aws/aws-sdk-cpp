/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/ExposureSeverity.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace ExposureSeverityMapper {

static const int Informational_HASH = HashingUtils::HashString("Informational");
static const int Low_HASH = HashingUtils::HashString("Low");
static const int Medium_HASH = HashingUtils::HashString("Medium");
static const int High_HASH = HashingUtils::HashString("High");
static const int Critical_HASH = HashingUtils::HashString("Critical");

ExposureSeverity GetExposureSeverityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Informational_HASH) {
    return ExposureSeverity::Informational;
  } else if (hashCode == Low_HASH) {
    return ExposureSeverity::Low;
  } else if (hashCode == Medium_HASH) {
    return ExposureSeverity::Medium;
  } else if (hashCode == High_HASH) {
    return ExposureSeverity::High;
  } else if (hashCode == Critical_HASH) {
    return ExposureSeverity::Critical;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ExposureSeverity>(hashCode);
  }

  return ExposureSeverity::NOT_SET;
}

Aws::String GetNameForExposureSeverity(ExposureSeverity enumValue) {
  switch (enumValue) {
    case ExposureSeverity::NOT_SET:
      return {};
    case ExposureSeverity::Informational:
      return "Informational";
    case ExposureSeverity::Low:
      return "Low";
    case ExposureSeverity::Medium:
      return "Medium";
    case ExposureSeverity::High:
      return "High";
    case ExposureSeverity::Critical:
      return "Critical";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ExposureSeverityMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
