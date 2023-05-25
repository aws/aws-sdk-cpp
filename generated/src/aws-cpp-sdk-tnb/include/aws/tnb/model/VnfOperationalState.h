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
  enum class VnfOperationalState
  {
    NOT_SET,
    STARTED,
    STOPPED
  };

namespace VnfOperationalStateMapper
{
AWS_TNB_API VnfOperationalState GetVnfOperationalStateForName(const Aws::String& name);

AWS_TNB_API Aws::String GetNameForVnfOperationalState(VnfOperationalState value);
} // namespace VnfOperationalStateMapper
} // namespace Model
} // namespace tnb
} // namespace Aws
