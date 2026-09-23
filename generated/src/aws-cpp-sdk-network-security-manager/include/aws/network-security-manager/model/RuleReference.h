/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {

/**
 * <p>A reference to a rule in a create or update request.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/RuleReference">AWS
 * API Reference</a></p>
 */
class RuleReference {
 public:
  AWS_NETWORKSECURITYMANAGER_API RuleReference() = default;
  AWS_NETWORKSECURITYMANAGER_API RuleReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API RuleReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  RuleReference& WithRuleIdentifier(RuleIdentifierT&& value) {
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
