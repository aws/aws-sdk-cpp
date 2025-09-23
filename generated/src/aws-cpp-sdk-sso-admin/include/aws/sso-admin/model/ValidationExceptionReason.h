/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    KMS_InvalidKeyUsageException,
    KMS_InvalidStateException,
    KMS_DisabledException
  };

namespace ValidationExceptionReasonMapper
{
AWS_SSOADMIN_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
