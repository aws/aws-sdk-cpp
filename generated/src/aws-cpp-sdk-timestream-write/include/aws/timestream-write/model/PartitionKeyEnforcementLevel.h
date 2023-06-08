/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{
  enum class PartitionKeyEnforcementLevel
  {
    NOT_SET,
    REQUIRED,
    OPTIONAL
  };

namespace PartitionKeyEnforcementLevelMapper
{
AWS_TIMESTREAMWRITE_API PartitionKeyEnforcementLevel GetPartitionKeyEnforcementLevelForName(const Aws::String& name);

AWS_TIMESTREAMWRITE_API Aws::String GetNameForPartitionKeyEnforcementLevel(PartitionKeyEnforcementLevel value);
} // namespace PartitionKeyEnforcementLevelMapper
} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
