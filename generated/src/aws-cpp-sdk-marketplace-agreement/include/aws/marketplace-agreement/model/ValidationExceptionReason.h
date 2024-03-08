/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AgreementService
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    INVALID_AGREEMENT_ID,
    MISSING_AGREEMENT_ID,
    INVALID_CATALOG,
    INVALID_FILTER_NAME,
    INVALID_FILTER_VALUES,
    INVALID_SORT_BY,
    INVALID_SORT_ORDER,
    INVALID_NEXT_TOKEN,
    INVALID_MAX_RESULTS,
    UNSUPPORTED_FILTERS,
    OTHER
  };

namespace ValidationExceptionReasonMapper
{
AWS_AGREEMENTSERVICE_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace AgreementService
} // namespace Aws
