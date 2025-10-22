/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RTBFabric
{
namespace Model
{
  enum class ResponderErrorMaskingAction
  {
    NOT_SET,
    NO_BID,
    PASSTHROUGH
  };

namespace ResponderErrorMaskingActionMapper
{
AWS_RTBFABRIC_API ResponderErrorMaskingAction GetResponderErrorMaskingActionForName(const Aws::String& name);

AWS_RTBFABRIC_API Aws::String GetNameForResponderErrorMaskingAction(ResponderErrorMaskingAction value);
} // namespace ResponderErrorMaskingActionMapper
} // namespace Model
} // namespace RTBFabric
} // namespace Aws
