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
  enum class ThrottlingExceptionReason
  {
    NOT_SET,
    KMS_ThrottlingException
  };

namespace ThrottlingExceptionReasonMapper
{
AWS_SSOADMIN_API ThrottlingExceptionReason GetThrottlingExceptionReasonForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForThrottlingExceptionReason(ThrottlingExceptionReason value);
} // namespace ThrottlingExceptionReasonMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
