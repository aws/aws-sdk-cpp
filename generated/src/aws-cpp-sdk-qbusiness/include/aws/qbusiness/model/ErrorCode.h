/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class ErrorCode
  {
    NOT_SET,
    InternalError,
    InvalidRequest,
    ResourceInactive,
    ResourceNotFound
  };

namespace ErrorCodeMapper
{
AWS_QBUSINESS_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForErrorCode(ErrorCode value);
} // namespace ErrorCodeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
