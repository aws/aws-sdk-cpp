/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
enum class ValidationExceptionReason { NOT_SET, REQUEST_VALIDATION_FAILED, BUSINESS_VALIDATION_FAILED };

namespace ValidationExceptionReasonMapper {
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
