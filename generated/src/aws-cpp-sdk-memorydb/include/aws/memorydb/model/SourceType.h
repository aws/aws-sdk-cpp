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
  enum class SourceType
  {
    NOT_SET,
    node,
    parameter_group,
    subnet_group,
    cluster,
    user,
    acl
  };

namespace SourceTypeMapper
{
AWS_MEMORYDB_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_MEMORYDB_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace MemoryDB
} // namespace Aws
