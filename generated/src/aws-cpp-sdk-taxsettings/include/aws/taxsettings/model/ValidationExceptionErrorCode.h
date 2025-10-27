/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/TaxSettings_EXPORTS.h>

namespace Aws {
namespace TaxSettings {
namespace Model {
enum class ValidationExceptionErrorCode { NOT_SET, MalformedToken, ExpiredToken, InvalidToken, FieldValidationFailed, MissingInput };

namespace ValidationExceptionErrorCodeMapper {
AWS_TAXSETTINGS_API ValidationExceptionErrorCode GetValidationExceptionErrorCodeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForValidationExceptionErrorCode(ValidationExceptionErrorCode value);
}  // namespace ValidationExceptionErrorCodeMapper
}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
