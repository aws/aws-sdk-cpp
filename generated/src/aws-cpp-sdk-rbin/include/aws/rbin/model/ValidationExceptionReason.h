/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RecycleBin
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    INVALID_PAGE_TOKEN,
    INVALID_PARAMETER_VALUE
  };

namespace ValidationExceptionReasonMapper
{
AWS_RECYCLEBIN_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_RECYCLEBIN_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace RecycleBin
} // namespace Aws
