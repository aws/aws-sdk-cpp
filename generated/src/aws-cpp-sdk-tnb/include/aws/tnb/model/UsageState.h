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
  enum class UsageState
  {
    NOT_SET,
    IN_USE,
    NOT_IN_USE
  };

namespace UsageStateMapper
{
AWS_TNB_API UsageState GetUsageStateForName(const Aws::String& name);

AWS_TNB_API Aws::String GetNameForUsageState(UsageState value);
} // namespace UsageStateMapper
} // namespace Model
} // namespace tnb
} // namespace Aws
