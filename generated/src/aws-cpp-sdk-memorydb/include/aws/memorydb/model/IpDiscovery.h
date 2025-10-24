﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/MemoryDB_EXPORTS.h>

namespace Aws {
namespace MemoryDB {
namespace Model {
enum class IpDiscovery { NOT_SET, ipv4, ipv6 };

namespace IpDiscoveryMapper {
AWS_MEMORYDB_API IpDiscovery GetIpDiscoveryForName(const Aws::String& name);

AWS_MEMORYDB_API Aws::String GetNameForIpDiscovery(IpDiscovery value);
}  // namespace IpDiscoveryMapper
}  // namespace Model
}  // namespace MemoryDB
}  // namespace Aws
