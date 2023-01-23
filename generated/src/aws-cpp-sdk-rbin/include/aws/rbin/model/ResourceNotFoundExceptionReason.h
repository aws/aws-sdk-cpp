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
  enum class ResourceNotFoundExceptionReason
  {
    NOT_SET,
    RULE_NOT_FOUND
  };

namespace ResourceNotFoundExceptionReasonMapper
{
AWS_RECYCLEBIN_API ResourceNotFoundExceptionReason GetResourceNotFoundExceptionReasonForName(const Aws::String& name);

AWS_RECYCLEBIN_API Aws::String GetNameForResourceNotFoundExceptionReason(ResourceNotFoundExceptionReason value);
} // namespace ResourceNotFoundExceptionReasonMapper
} // namespace Model
} // namespace RecycleBin
} // namespace Aws
