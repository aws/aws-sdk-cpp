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
enum class NatGatewaySupportState { NOT_SET, ENABLED, ENABLING, DISABLED, DISABLING, PENDING_ATTACHMENT_ACCEPTANCE };

namespace NatGatewaySupportStateMapper {
AWS_NETWORKMANAGER_API NatGatewaySupportState GetNatGatewaySupportStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForNatGatewaySupportState(NatGatewaySupportState value);
}  // namespace NatGatewaySupportStateMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
