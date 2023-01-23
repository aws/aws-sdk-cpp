/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    UNKNOWN_OPERATION,
    CANNOT_PARSE,
    FIELD_VALIDATION_FAILED,
    OTHER
  };

namespace ValidationExceptionReasonMapper
{
AWS_WELLARCHITECTED_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
