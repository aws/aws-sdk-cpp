/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFV2
{
namespace Model
{
  enum class LogScope
  {
    NOT_SET,
    CUSTOMER,
    SECURITY_LAKE
  };

namespace LogScopeMapper
{
AWS_WAFV2_API LogScope GetLogScopeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForLogScope(LogScope value);
} // namespace LogScopeMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
