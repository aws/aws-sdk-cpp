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
  enum class FailureReason
  {
    NOT_SET,
    TOKEN_MISSING,
    TOKEN_EXPIRED,
    TOKEN_INVALID,
    TOKEN_DOMAIN_MISMATCH
  };

namespace FailureReasonMapper
{
AWS_WAFV2_API FailureReason GetFailureReasonForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForFailureReason(FailureReason value);
} // namespace FailureReasonMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
