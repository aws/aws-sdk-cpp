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
  enum class ServiceUpdateType
  {
    NOT_SET,
    security_update
  };

namespace ServiceUpdateTypeMapper
{
AWS_MEMORYDB_API ServiceUpdateType GetServiceUpdateTypeForName(const Aws::String& name);

AWS_MEMORYDB_API Aws::String GetNameForServiceUpdateType(ServiceUpdateType value);
} // namespace ServiceUpdateTypeMapper
} // namespace Model
} // namespace MemoryDB
} // namespace Aws
