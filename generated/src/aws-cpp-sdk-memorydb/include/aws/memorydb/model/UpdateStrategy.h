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
  enum class UpdateStrategy
  {
    NOT_SET,
    coordinated,
    uncoordinated
  };

namespace UpdateStrategyMapper
{
AWS_MEMORYDB_API UpdateStrategy GetUpdateStrategyForName(const Aws::String& name);

AWS_MEMORYDB_API Aws::String GetNameForUpdateStrategy(UpdateStrategy value);
} // namespace UpdateStrategyMapper
} // namespace Model
} // namespace MemoryDB
} // namespace Aws
