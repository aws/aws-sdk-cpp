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
enum class ContextStoreState { NOT_SET, PENDING, AVAILABLE, UPDATING, DELETING, DELETED };

namespace ContextStoreStateMapper {
AWS_NETWORKMANAGER_API ContextStoreState GetContextStoreStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForContextStoreState(ContextStoreState value);
}  // namespace ContextStoreStateMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
