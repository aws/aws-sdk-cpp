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
  enum class NsdUsageState
  {
    NOT_SET,
    IN_USE,
    NOT_IN_USE
  };

namespace NsdUsageStateMapper
{
AWS_TNB_API NsdUsageState GetNsdUsageStateForName(const Aws::String& name);

AWS_TNB_API Aws::String GetNameForNsdUsageState(NsdUsageState value);
} // namespace NsdUsageStateMapper
} // namespace Model
} // namespace tnb
} // namespace Aws
