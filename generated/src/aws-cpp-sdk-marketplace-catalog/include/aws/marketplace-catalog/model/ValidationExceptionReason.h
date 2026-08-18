/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
enum class ValidationExceptionReason { NOT_SET, UnknownOperation, CannotParse, FieldValidationFailed, Other };

namespace ValidationExceptionReasonMapper {
AWS_MARKETPLACECATALOG_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
