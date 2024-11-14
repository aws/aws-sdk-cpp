/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    REQUEST_VALIDATION_FAILED,
    BUSINESS_VALIDATION_FAILED
  };

namespace ValidationExceptionReasonMapper
{
AWS_PARTNERCENTRALSELLING_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_PARTNERCENTRALSELLING_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
