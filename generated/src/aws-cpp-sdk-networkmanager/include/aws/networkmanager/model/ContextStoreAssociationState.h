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
enum class ContextStoreAssociationState { NOT_SET, ASSOCIATING, ASSOCIATED, DISASSOCIATING, FAILED };

namespace ContextStoreAssociationStateMapper {
AWS_NETWORKMANAGER_API ContextStoreAssociationState GetContextStoreAssociationStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForContextStoreAssociationState(ContextStoreAssociationState value);
}  // namespace ContextStoreAssociationStateMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
