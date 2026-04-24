/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {
enum class ValidationExceptionErrorCode {
  NOT_SET,
  REQUIRED_FIELD_MISSING,
  INVALID_ENUM_VALUE,
  INVALID_STRING_FORMAT,
  INVALID_VALUE,
  NOT_ENOUGH_VALUES,
  TOO_MANY_VALUES,
  INVALID_RESOURCE_STATE,
  DUPLICATE_KEY_VALUE,
  VALUE_OUT_OF_RANGE,
  ACTION_NOT_PERMITTED
};

namespace ValidationExceptionErrorCodeMapper {
AWS_PARTNERCENTRALBENEFITS_API ValidationExceptionErrorCode GetValidationExceptionErrorCodeForName(const Aws::String& name);

AWS_PARTNERCENTRALBENEFITS_API Aws::String GetNameForValidationExceptionErrorCode(ValidationExceptionErrorCode value);
}  // namespace ValidationExceptionErrorCodeMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
