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
  enum class TargetState
  {
    NOT_SET,
    REGISTERING,
    AVAILABLE,
    UNAVAILABLE
  };

namespace TargetStateMapper
{
AWS_RDS_API TargetState GetTargetStateForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForTargetState(TargetState value);
} // namespace TargetStateMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
