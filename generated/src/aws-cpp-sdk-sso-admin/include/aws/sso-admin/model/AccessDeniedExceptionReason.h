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
  enum class AccessDeniedExceptionReason
  {
    NOT_SET,
    KMS_AccessDeniedException
  };

namespace AccessDeniedExceptionReasonMapper
{
AWS_SSOADMIN_API AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason value);
} // namespace AccessDeniedExceptionReasonMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
