/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-account/model/FieldValidationCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
namespace FieldValidationCodeMapper {

static const int REQUIRED_FIELD_MISSING_HASH = HashingUtils::HashString("REQUIRED_FIELD_MISSING");
static const int DUPLICATE_VALUE_HASH = HashingUtils::HashString("DUPLICATE_VALUE");
static const int INVALID_VALUE_HASH = HashingUtils::HashString("INVALID_VALUE");
static const int INVALID_STRING_FORMAT_HASH = HashingUtils::HashString("INVALID_STRING_FORMAT");
static const int TOO_MANY_VALUES_HASH = HashingUtils::HashString("TOO_MANY_VALUES");
static const int ACTION_NOT_PERMITTED_HASH = HashingUtils::HashString("ACTION_NOT_PERMITTED");
static const int INVALID_ENUM_VALUE_HASH = HashingUtils::HashString("INVALID_ENUM_VALUE");

FieldValidationCode GetFieldValidationCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REQUIRED_FIELD_MISSING_HASH) {
    return FieldValidationCode::REQUIRED_FIELD_MISSING;
  } else if (hashCode == DUPLICATE_VALUE_HASH) {
    return FieldValidationCode::DUPLICATE_VALUE;
  } else if (hashCode == INVALID_VALUE_HASH) {
    return FieldValidationCode::INVALID_VALUE;
  } else if (hashCode == INVALID_STRING_FORMAT_HASH) {
    return FieldValidationCode::INVALID_STRING_FORMAT;
  } else if (hashCode == TOO_MANY_VALUES_HASH) {
    return FieldValidationCode::TOO_MANY_VALUES;
  } else if (hashCode == ACTION_NOT_PERMITTED_HASH) {
    return FieldValidationCode::ACTION_NOT_PERMITTED;
  } else if (hashCode == INVALID_ENUM_VALUE_HASH) {
    return FieldValidationCode::INVALID_ENUM_VALUE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FieldValidationCode>(hashCode);
  }

  return FieldValidationCode::NOT_SET;
}

Aws::String GetNameForFieldValidationCode(FieldValidationCode enumValue) {
  switch (enumValue) {
    case FieldValidationCode::NOT_SET:
      return {};
    case FieldValidationCode::REQUIRED_FIELD_MISSING:
      return "REQUIRED_FIELD_MISSING";
    case FieldValidationCode::DUPLICATE_VALUE:
      return "DUPLICATE_VALUE";
    case FieldValidationCode::INVALID_VALUE:
      return "INVALID_VALUE";
    case FieldValidationCode::INVALID_STRING_FORMAT:
      return "INVALID_STRING_FORMAT";
    case FieldValidationCode::TOO_MANY_VALUES:
      return "TOO_MANY_VALUES";
    case FieldValidationCode::ACTION_NOT_PERMITTED:
      return "ACTION_NOT_PERMITTED";
    case FieldValidationCode::INVALID_ENUM_VALUE:
      return "INVALID_ENUM_VALUE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FieldValidationCodeMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
