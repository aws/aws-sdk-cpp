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
  enum class LogType
  {
    NOT_SET,
    WAF_LOGS
  };

namespace LogTypeMapper
{
AWS_WAFV2_API LogType GetLogTypeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForLogType(LogType value);
} // namespace LogTypeMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
