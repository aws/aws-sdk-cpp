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
enum class NatRuleState {
  NOT_SET,
  CREATING,
  MODIFYING,
  DELETING,
  ACTIVATED,
  ACTIVATING,
  DEACTIVATED,
  DEACTIVATING,
  FAILED,
  PENDING_ATTACHMENT_ACCEPTANCE
};

namespace NatRuleStateMapper {
AWS_NETWORKMANAGER_API NatRuleState GetNatRuleStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForNatRuleState(NatRuleState value);
}  // namespace NatRuleStateMapper
}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
