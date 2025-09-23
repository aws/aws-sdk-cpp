/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSOOIDC
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
AWS_SSOOIDC_API AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name);

AWS_SSOOIDC_API Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason value);
} // namespace AccessDeniedExceptionReasonMapper
} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
