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
  enum class TableStatus
  {
    NOT_SET,
    ACTIVE,
    DELETING
  };

namespace TableStatusMapper
{
AWS_TIMESTREAMWRITE_API TableStatus GetTableStatusForName(const Aws::String& name);

AWS_TIMESTREAMWRITE_API Aws::String GetNameForTableStatus(TableStatus value);
} // namespace TableStatusMapper
} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
