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
  enum class NsdOperationalState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace NsdOperationalStateMapper
{
AWS_TNB_API NsdOperationalState GetNsdOperationalStateForName(const Aws::String& name);

AWS_TNB_API Aws::String GetNameForNsdOperationalState(NsdOperationalState value);
} // namespace NsdOperationalStateMapper
} // namespace Model
} // namespace tnb
} // namespace Aws
