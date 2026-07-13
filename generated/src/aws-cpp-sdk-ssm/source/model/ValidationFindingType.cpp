/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ssm/model/ValidationFindingType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {
namespace ValidationFindingTypeMapper {

static const int INFO_HASH = HashingUtils::HashString("INFO");
static const int WARN_HASH = HashingUtils::HashString("WARN");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");

ValidationFindingType GetValidationFindingTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INFO_HASH) {
    return ValidationFindingType::INFO;
  } else if (hashCode == WARN_HASH) {
    return ValidationFindingType::WARN;
  } else if (hashCode == ERROR__HASH) {
    return ValidationFindingType::ERROR_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationFindingType>(hashCode);
  }

  return ValidationFindingType::NOT_SET;
}

Aws::String GetNameForValidationFindingType(ValidationFindingType enumValue) {
  switch (enumValue) {
    case ValidationFindingType::NOT_SET:
      return {};
    case ValidationFindingType::INFO:
      return "INFO";
    case ValidationFindingType::WARN:
      return "WARN";
    case ValidationFindingType::ERROR_:
      return "ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidationFindingTypeMapper
}  // namespace Model
}  // namespace SSM
}  // namespace Aws
