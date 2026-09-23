/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManagerRequest.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

/**
 */
class DeleteRuleRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API DeleteRuleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteRule"; }

  AWS_NETWORKSECURITYMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the rule. This is the rule's Amazon Resource Name
   * (ARN).</p>
   */
  inline const Aws::String& GetRuleIdentifier() const { return m_ruleIdentifier; }
  inline bool RuleIdentifierHasBeenSet() const { return m_ruleIdentifierHasBeenSet; }
  template <typename RuleIdentifierT = Aws::String>
  void SetRuleIdentifier(RuleIdentifierT&& value) {
    m_ruleIdentifierHasBeenSet = true;
    m_ruleIdentifier = std::forward<RuleIdentifierT>(value);
  }
  template <typename RuleIdentifierT = Aws::String>
  DeleteRuleRequest& WithRuleIdentifier(RuleIdentifierT&& value) {
    SetRuleIdentifier(std::forward<RuleIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ruleIdentifier;
  bool m_ruleIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
