/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Synthetics
{
namespace Model
{
  enum class CanaryRunStateReasonCode
  {
    NOT_SET,
    CANARY_FAILURE,
    EXECUTION_FAILURE
  };

namespace CanaryRunStateReasonCodeMapper
{
AWS_SYNTHETICS_API CanaryRunStateReasonCode GetCanaryRunStateReasonCodeForName(const Aws::String& name);

AWS_SYNTHETICS_API Aws::String GetNameForCanaryRunStateReasonCode(CanaryRunStateReasonCode value);
} // namespace CanaryRunStateReasonCodeMapper
} // namespace Model
} // namespace Synthetics
} // namespace Aws
