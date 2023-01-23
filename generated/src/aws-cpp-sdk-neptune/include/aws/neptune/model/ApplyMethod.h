/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Neptune
{
namespace Model
{
  enum class ApplyMethod
  {
    NOT_SET,
    immediate,
    pending_reboot
  };

namespace ApplyMethodMapper
{
AWS_NEPTUNE_API ApplyMethod GetApplyMethodForName(const Aws::String& name);

AWS_NEPTUNE_API Aws::String GetNameForApplyMethod(ApplyMethod value);
} // namespace ApplyMethodMapper
} // namespace Model
} // namespace Neptune
} // namespace Aws
