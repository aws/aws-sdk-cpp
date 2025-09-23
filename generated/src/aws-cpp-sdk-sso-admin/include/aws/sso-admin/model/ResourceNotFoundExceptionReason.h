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
  enum class ResourceNotFoundExceptionReason
  {
    NOT_SET,
    KMS_NotFoundException
  };

namespace ResourceNotFoundExceptionReasonMapper
{
AWS_SSOADMIN_API ResourceNotFoundExceptionReason GetResourceNotFoundExceptionReasonForName(const Aws::String& name);

AWS_SSOADMIN_API Aws::String GetNameForResourceNotFoundExceptionReason(ResourceNotFoundExceptionReason value);
} // namespace ResourceNotFoundExceptionReasonMapper
} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
