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
  enum class InvalidRequestExceptionReason
  {
    NOT_SET,
    KMS_NotFoundException,
    KMS_InvalidKeyUsageException,
    KMS_InvalidStateException,
    KMS_DisabledException
  };

namespace InvalidRequestExceptionReasonMapper
{
AWS_SSOOIDC_API InvalidRequestExceptionReason GetInvalidRequestExceptionReasonForName(const Aws::String& name);

AWS_SSOOIDC_API Aws::String GetNameForInvalidRequestExceptionReason(InvalidRequestExceptionReason value);
} // namespace InvalidRequestExceptionReasonMapper
} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
