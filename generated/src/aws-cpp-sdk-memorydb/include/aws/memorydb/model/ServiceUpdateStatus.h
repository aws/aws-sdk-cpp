/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{
  enum class ServiceUpdateStatus
  {
    NOT_SET,
    available,
    in_progress,
    complete,
    scheduled
  };

namespace ServiceUpdateStatusMapper
{
AWS_MEMORYDB_API ServiceUpdateStatus GetServiceUpdateStatusForName(const Aws::String& name);

AWS_MEMORYDB_API Aws::String GetNameForServiceUpdateStatus(ServiceUpdateStatus value);
} // namespace ServiceUpdateStatusMapper
} // namespace Model
} // namespace MemoryDB
} // namespace Aws
