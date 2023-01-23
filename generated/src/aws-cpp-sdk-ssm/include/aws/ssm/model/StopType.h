/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class StopType
  {
    NOT_SET,
    Complete,
    Cancel
  };

namespace StopTypeMapper
{
AWS_SSM_API StopType GetStopTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForStopType(StopType value);
} // namespace StopTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
