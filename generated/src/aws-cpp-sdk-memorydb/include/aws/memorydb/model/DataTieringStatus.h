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
  enum class DataTieringStatus
  {
    NOT_SET,
    true_,
    false_
  };

namespace DataTieringStatusMapper
{
AWS_MEMORYDB_API DataTieringStatus GetDataTieringStatusForName(const Aws::String& name);

AWS_MEMORYDB_API Aws::String GetNameForDataTieringStatus(DataTieringStatus value);
} // namespace DataTieringStatusMapper
} // namespace Model
} // namespace MemoryDB
} // namespace Aws
