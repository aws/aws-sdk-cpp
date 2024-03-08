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
  enum class LimitlessDatabaseStatus
  {
    NOT_SET,
    active,
    not_in_use,
    enabled,
    disabled,
    enabling,
    disabling,
    modifying_max_capacity,
    error
  };

namespace LimitlessDatabaseStatusMapper
{
AWS_RDS_API LimitlessDatabaseStatus GetLimitlessDatabaseStatusForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForLimitlessDatabaseStatus(LimitlessDatabaseStatus value);
} // namespace LimitlessDatabaseStatusMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
