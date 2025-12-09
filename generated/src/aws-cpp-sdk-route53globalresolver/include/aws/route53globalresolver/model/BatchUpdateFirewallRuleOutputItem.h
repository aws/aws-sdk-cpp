/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/BatchUpdateFirewallRuleResult.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {

/**
 * <p>The result of updating a firewall rule in a batch operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/BatchUpdateFirewallRuleOutputItem">AWS
 * API Reference</a></p>
 */
class BatchUpdateFirewallRuleOutputItem {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API BatchUpdateFirewallRuleOutputItem() = default;
  AWS_ROUTE53GLOBALRESOLVER_API BatchUpdateFirewallRuleOutputItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API BatchUpdateFirewallRuleOutputItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The firewall rule that was updated in the batch operation.</p>
   */
  inline const BatchUpdateFirewallRuleResult& GetFirewallRule() const { return m_firewallRule; }
  inline bool FirewallRuleHasBeenSet() const { return m_firewallRuleHasBeenSet; }
  template <typename FirewallRuleT = BatchUpdateFirewallRuleResult>
  void SetFirewallRule(FirewallRuleT&& value) {
    m_firewallRuleHasBeenSet = true;
    m_firewallRule = std::forward<FirewallRuleT>(value);
  }
  template <typename FirewallRuleT = BatchUpdateFirewallRuleResult>
  BatchUpdateFirewallRuleOutputItem& WithFirewallRule(FirewallRuleT&& value) {
    SetFirewallRule(std::forward<FirewallRuleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The response code for the update operation.</p>
   */
  inline int GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(int value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline BatchUpdateFirewallRuleOutputItem& WithCode(int value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The response message for the update operation.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchUpdateFirewallRuleOutputItem& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  BatchUpdateFirewallRuleResult m_firewallRule;

  int m_code{0};

  Aws::String m_message;
  bool m_firewallRuleHasBeenSet = false;
  bool m_codeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
