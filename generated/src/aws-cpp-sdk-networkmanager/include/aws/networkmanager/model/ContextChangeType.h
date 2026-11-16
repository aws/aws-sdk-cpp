/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

namespace Aws {
namespace NetworkManager {
namespace Model {
enum class ContextChangeType { NOT_SET, ADDED, REMOVED };

namespace ContextChangeTypeMapper {
AWS_NETWORKMANAGER_API ContextChangeType GetContextChangeTypeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForContextChangeType(ContextChangeType value);
}  // namespace ContextChangeTypeMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
