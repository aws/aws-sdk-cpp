/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{
  enum class StatusCode
  {
    NOT_SET,
    Complete,
    InternalError,
    PartialData,
    Forbidden
  };

namespace StatusCodeMapper
{
AWS_CLOUDWATCH_API StatusCode GetStatusCodeForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForStatusCode(StatusCode value);
} // namespace StatusCodeMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
