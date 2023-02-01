/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
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
AWS_RDS_API ApplyMethod GetApplyMethodForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForApplyMethod(ApplyMethod value);
} // namespace ApplyMethodMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
