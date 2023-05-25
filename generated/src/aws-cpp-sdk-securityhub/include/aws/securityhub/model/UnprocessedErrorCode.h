/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class UnprocessedErrorCode
  {
    NOT_SET,
    INVALID_INPUT,
    ACCESS_DENIED,
    NOT_FOUND,
    LIMIT_EXCEEDED
  };

namespace UnprocessedErrorCodeMapper
{
AWS_SECURITYHUB_API UnprocessedErrorCode GetUnprocessedErrorCodeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForUnprocessedErrorCode(UnprocessedErrorCode value);
} // namespace UnprocessedErrorCodeMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
