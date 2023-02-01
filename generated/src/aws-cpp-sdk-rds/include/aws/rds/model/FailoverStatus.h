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
  enum class FailoverStatus
  {
    NOT_SET,
    pending,
    failing_over,
    cancelling
  };

namespace FailoverStatusMapper
{
AWS_RDS_API FailoverStatus GetFailoverStatusForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForFailoverStatus(FailoverStatus value);
} // namespace FailoverStatusMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
