/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{
  enum class DecisionTaskTimeoutType
  {
    NOT_SET,
    START_TO_CLOSE
  };

namespace DecisionTaskTimeoutTypeMapper
{
AWS_SWF_API DecisionTaskTimeoutType GetDecisionTaskTimeoutTypeForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForDecisionTaskTimeoutType(DecisionTaskTimeoutType value);
} // namespace DecisionTaskTimeoutTypeMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
