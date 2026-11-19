/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
enum class ValidationExceptionReason { NOT_SET, FIELD_VALIDATION_FAILED, CANNOT_PARSE, OTHER, CAMPAIGN_INCOMPLETE };

namespace ValidationExceptionReasonMapper {
AWS_PARTNERCENTRALMARKETING_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
