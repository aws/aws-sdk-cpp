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
 * <p>An association between a template and a rule, as returned in outputs. The
 * corresponding request structure is <code>RuleReference</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/AssociatedRule">AWS
 * API Reference</a></p>
 */
class AssociatedRule {
 public:
  AWS_NETWORKSECURITYMANAGER_API AssociatedRule() = default;
  AWS_NETWORKSECURITYMANAGER_API AssociatedRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API AssociatedRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the associated rule.</p>
   */
  inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
  inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
  template <typename RuleArnT = Aws::String>
  void SetRuleArn(RuleArnT&& value) {
    m_ruleArnHasBeenSet = true;
    m_ruleArn = std::forward<RuleArnT>(value);
  }
  template <typename RuleArnT = Aws::String>
  AssociatedRule& WithRuleArn(RuleArnT&& value) {
    SetRuleArn(std::forward<RuleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ruleArn;
  bool m_ruleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
