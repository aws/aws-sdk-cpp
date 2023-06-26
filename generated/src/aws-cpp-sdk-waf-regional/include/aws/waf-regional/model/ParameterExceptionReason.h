/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{
  enum class ParameterExceptionReason
  {
    NOT_SET,
    INVALID_OPTION,
    ILLEGAL_COMBINATION,
    ILLEGAL_ARGUMENT,
    INVALID_TAG_KEY
  };

namespace ParameterExceptionReasonMapper
{
AWS_WAFREGIONAL_API ParameterExceptionReason GetParameterExceptionReasonForName(const Aws::String& name);

AWS_WAFREGIONAL_API Aws::String GetNameForParameterExceptionReason(ParameterExceptionReason value);
} // namespace ParameterExceptionReasonMapper
} // namespace Model
} // namespace WAFRegional
} // namespace Aws
