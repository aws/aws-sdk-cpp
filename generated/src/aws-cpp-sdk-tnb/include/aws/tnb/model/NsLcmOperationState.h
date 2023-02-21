/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace tnb
{
namespace Model
{
  enum class NsLcmOperationState
  {
    NOT_SET,
    PROCESSING,
    COMPLETED,
    FAILED,
    CANCELLING,
    CANCELLED
  };

namespace NsLcmOperationStateMapper
{
AWS_TNB_API NsLcmOperationState GetNsLcmOperationStateForName(const Aws::String& name);

AWS_TNB_API Aws::String GetNameForNsLcmOperationState(NsLcmOperationState value);
} // namespace NsLcmOperationStateMapper
} // namespace Model
} // namespace tnb
} // namespace Aws
