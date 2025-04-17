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
  enum class NetworkType
  {
    NOT_SET,
    ipv4,
    ipv6,
    dual_stack
  };

namespace NetworkTypeMapper
{
AWS_MEMORYDB_API NetworkType GetNetworkTypeForName(const Aws::String& name);

AWS_MEMORYDB_API Aws::String GetNameForNetworkType(NetworkType value);
} // namespace NetworkTypeMapper
} // namespace Model
} // namespace MemoryDB
} // namespace Aws
