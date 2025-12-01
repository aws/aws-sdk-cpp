/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {
enum class FieldValidationCode {
  NOT_SET,
  REQUIRED_FIELD_MISSING,
  DUPLICATE_VALUE,
  INVALID_VALUE,
  INVALID_STRING_FORMAT,
  TOO_MANY_VALUES,
  ACTION_NOT_PERMITTED,
  INVALID_ENUM_VALUE
};

namespace FieldValidationCodeMapper {
AWS_PARTNERCENTRALACCOUNT_API FieldValidationCode GetFieldValidationCodeForName(const Aws::String& name);

AWS_PARTNERCENTRALACCOUNT_API Aws::String GetNameForFieldValidationCode(FieldValidationCode value);
}  // namespace FieldValidationCodeMapper
}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
