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
  enum class ActivityStreamMode
  {
    NOT_SET,
    sync,
    async
  };

namespace ActivityStreamModeMapper
{
AWS_RDS_API ActivityStreamMode GetActivityStreamModeForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForActivityStreamMode(ActivityStreamMode value);
} // namespace ActivityStreamModeMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
